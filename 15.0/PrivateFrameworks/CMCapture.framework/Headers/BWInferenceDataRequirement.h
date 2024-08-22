// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCEDATAREQUIREMENT_H
#define BWINFERENCEDATAREQUIREMENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BWInferenceDataRequirement : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDataRequirement:(id)arg0 ;


@end


#endif