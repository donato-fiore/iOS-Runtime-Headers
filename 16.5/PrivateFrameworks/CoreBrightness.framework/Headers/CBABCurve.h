// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBABCURVE_H
#define CBABCURVE_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBABCurve : NSObject {
    ? pref;
    float currentLux;
    float mappedBrightness;
    NSObject<OS_os_log> *_logHandle;
}


@property float scaleFactor; // ivar: _scaleFactor
@property (readonly) NSUInteger version; // ivar: _version


-(BOOL)setLux:(float)arg0 ;
-(float)getLinearBrightness;
-(float)getLux;
-(float)getScaledBL1;
-(float)getScaledBL2;
-(id)copyUserPrefState;
-(id)description;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 vendorID:(id)arg1 andProductID:(id)arg2 ;
-(void)resetToDefaultState;
-(void)setLinearBrightnessMin:(float)arg0 andMax:(float)arg1 ;
-(void)setSavedPrefences:(id)arg0 ;
-(void)setScaledBL1:(float)arg0 ;
-(void)setScaledBL2:(float)arg0 ;
-(void)updateALSParametersForDisplayBrightness:(float)arg0 ;


@end


#endif