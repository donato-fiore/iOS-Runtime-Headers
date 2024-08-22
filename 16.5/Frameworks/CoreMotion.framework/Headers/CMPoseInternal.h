// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMPOSEINTERNAL_H
#define CMPOSEINTERNAL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CMAttitude.h"

@interface CMPoseInternal : NSObject <NSCopying>

 {
    CMAttitude *fAttitude;
    ? fTranslation;
    CGFloat fConsumedAuxTimestamp;
    CGFloat fReceivedAuxTimestamp;
    CGFloat fMachAbsTimestamp;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPoseInternal:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPose:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif