// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELGROUP_H
#define MPMODELGROUP_H

@class NSString;


#import "MPModelObject.h"

@interface MPModelGroup : MPModelObject

@property (copy, nonatomic) NSString *title;


+(NSInteger)genericObjectType;
+(id)kind;
-(id)humanDescription;


@end


#endif