// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKARWALKINGFEATURE_H
#define VKARWALKINGFEATURE_H


#import <Foundation/Foundation.h>


@interface VKARWalkingFeature : NSObject

@property (readonly, nonatomic) NSUInteger intraFeaturePriority; // ivar: _intraFeaturePriority
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 intraFeaturePriority:(NSUInteger)arg1 ;


@end


#endif