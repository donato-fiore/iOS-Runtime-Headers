// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVDISPLAYCRITERIA_H
#define AVDISPLAYCRITERIA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVDisplayCriteriaInternal.h"

@interface AVDisplayCriteria : NSObject <NSCopying>

 {
    AVDisplayCriteriaInternal *_displayCriteria;
}


@property (readonly, nonatomic) float refreshRate;
@property (readonly) int videoDynamicRange;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRefreshRate:(float)arg0 videoDynamicRange:(int)arg1 ;
-(void)dealloc;


@end


#endif