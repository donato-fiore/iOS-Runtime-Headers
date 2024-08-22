// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLOCALEREGION_H
#define NSLOCALEREGION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSLocaleRegion : NSObject

@property (copy) NSString *threeCharacterCode; // ivar: _threeCharacterCode
@property (copy) NSString *twoCharacterCode; // ivar: _twoCharacterCode


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)initWithRegionIdentifier:(id)arg0 ;


@end


#endif