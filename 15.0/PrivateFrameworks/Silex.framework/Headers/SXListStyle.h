// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXLISTSTYLE_H
#define SXLISTSTYLE_H

@class NSString;


#import "SXJSONObject.h"
#import "SXJSONArray.h"

@interface SXListStyle : SXJSONObject

@property (readonly, nonatomic) NSString *character;
@property (readonly, nonatomic) NSUInteger depth;
@property (readonly, nonatomic) SXJSONArray *indices;
@property (readonly, nonatomic) NSUInteger style;


-(NSUInteger)styleWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif