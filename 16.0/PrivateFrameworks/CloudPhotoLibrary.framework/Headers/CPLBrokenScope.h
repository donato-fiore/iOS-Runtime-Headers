// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLBROKENSCOPE_H
#define CPLBROKENSCOPE_H

@class NSDate, NSString, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPLEngineLibrary.h"
#import "CPLEngineScope.h"

@interface CPLBrokenScope : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastShownAlertDate;
}


@property (readonly, nonatomic) NSString *alertMessage;
@property (readonly, nonatomic) NSString *alertTitle;
@property (readonly, nonatomic) NSString *alternateRecoverDescription;
@property (readonly, nonatomic) NSString *brokenMessage;
@property (readonly, nonatomic) NSString *brokenTitle;
@property (readonly, nonatomic) NSString *createRadarButtonTitle;
@property (readonly, nonatomic) NSURL *createRadarURL;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (readonly, nonatomic) CPLEngineScope *engineScope; // ivar: _engineScope
@property (readonly, nonatomic) BOOL hasEngineRecoveryMechanism;
@property (readonly, nonatomic, getter=isInternal) BOOL internal; // ivar: _internal
@property (readonly, nonatomic) NSString *internalRecoveryInstructions;
@property (readonly, nonatomic) NSString *radarDescription;
@property (readonly, nonatomic) NSString *radarTitle;
@property (readonly, nonatomic) NSString *readMoreButtonTitle;
@property (readonly, nonatomic) NSURL *readMoreURL;
@property (readonly, nonatomic) NSString *recoverButtonTitle;
@property (readonly, nonatomic) BOOL shouldShowAlertToUser; // ivar: _shouldShowAlertToUser


-(id)initWithEngineScope:(id)arg0 engineLibrary:(id)arg1 ;
-(void)_showAlertWithMessage:(id)arg0 readMoreURL:(id)arg1 createRadarURL:(id)arg2 showsRecoverButton:(BOOL)arg3 ;
-(void)recoverUsingEngineWithCompletionHandler:(id)arg0 ;
-(void)showAlertToUser;


@end


#endif