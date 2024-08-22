// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAPDFTAGINFO_H
#define TSAPDFTAGINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSAPdfTagInfo : NSObject

@property (readonly, nonatomic) NSDictionary *tagProperties; // ivar: _tagProperties
@property (readonly, nonatomic) int tagType; // ivar: _tagType


+(id)tagPropertiesWithActualText:(id)arg0 alternativeText:(id)arg1 titleText:(id)arg2 ;
-(id)initWithTagType:(int)arg0 tagProperties:(id)arg1 ;


@end


#endif