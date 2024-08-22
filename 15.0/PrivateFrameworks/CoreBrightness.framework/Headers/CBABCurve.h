// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(NSUInteger)getVersion;
-(float)getLinearBrightness;
-(float)getLux;
-(float)getScaledBL1;
-(float)getScaledBL2;
-(id)copyUserPrefState;
-(id)description;
-(id)init;
-(id)initWithUUID:(id)arg0 ;
-(void)resetToDefaultState;
-(void)setLinearBrightnessMin:(float)arg0 andMax:(float)arg1 ;
-(void)setSavedPrefences:(id)arg0 ;
-(void)setScaledBL1:(float)arg0 ;
-(void)setScaledBL2:(float)arg0 ;
-(void)updateALSParametersForDisplayBrightness:(float)arg0 ;


@end


#endif