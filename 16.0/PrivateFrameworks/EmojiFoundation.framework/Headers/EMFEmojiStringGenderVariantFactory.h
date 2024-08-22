// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMFEMOJISTRINGGENDERVARIANTFACTORY_H
#define EMFEMOJISTRINGGENDERVARIANTFACTORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EMFEmojiStringGenderVariantFactory : NSObject

@property (readonly, nonatomic) int gender; // ivar: _gender
@property (copy, nonatomic) NSString *sourceString; // ivar: _sourceString


-(id)initWithSourceString:(id)arg0 gender:(int)arg1 ;
-(id)stringForGenderVariant:(int)arg0 ;


@end


#endif