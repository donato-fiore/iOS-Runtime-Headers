// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLOCALELANGUAGE_H
#define NSLOCALELANGUAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSLocaleLanguage : NSObject

@property (copy) NSString *threeCharacterCode; // ivar: _threeCharacterCode
@property (copy) NSString *twoCharacterCode; // ivar: _twoCharacterCode


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithLocaleIdentifier:(id)arg0 ;


@end


#endif