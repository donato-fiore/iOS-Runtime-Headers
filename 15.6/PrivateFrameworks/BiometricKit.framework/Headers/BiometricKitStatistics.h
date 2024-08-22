// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BIOMETRICKITSTATISTICS_H
#define BIOMETRICKITSTATISTICS_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface BiometricKitStatistics : NSObject {
    BOOL _fingerOn;
    BOOL _enrolling;
    BOOL _badImagePerFingerDown;
    NSDate *_enrollmentStarTime;
    unsigned int _touchesPerEnroll;
    unsigned int _badImagesPerEnroll;
    unsigned int _rejectedImagesPerEnroll;
    unsigned int _primaryClusterAdditions;
    unsigned int _primaryClusterFailedAdditions;
    unsigned int _otherClustersAdditions;
    unsigned int _joinEvents;
    CGFloat _area;
    CGFloat _primaryClusterArea;
}




+(id)statistics;
-(id)init;
-(void)enroll:(int)arg0 ;
-(void)enrollProgress:(id)arg0 ;
-(void)enrollResult:(id)arg0 componentSet:(struct ? *)arg1 ;
-(void)initEnrollmentValues;
-(void)statusMessage:(unsigned int)arg0 ;


@end


#endif