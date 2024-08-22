// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMENABLEDSTATUSPROVIDER_H
#define PXCMMENABLEDSTATUSPROVIDER_H

@class PHPhotoLibrary, CPLStatus, NSString;
@protocol CPLStatusDelegate, PXSettingsKeyObserver;


#import "PXObservable.h"

@interface PXCMMEnabledStatusProvider : PXObservable <CPLStatusDelegate, PXSettingsKeyObserver>

 {
    BOOL _isFeatureEnabled;
    BOOL _isCPLEnabled;
    BOOL _hasExitDate;
    PHPhotoLibrary *_ph_photoLibrary;
    CPLStatus *_cplStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)currentStatusProvider;
-(BOOL)_hasExitDate;
-(BOOL)_isCMMEnabled;
-(BOOL)_isCPLEnabled;
-(BOOL)_isFeatureEnabled;
-(id)init;
-(void)_updateHasExitDate;
-(void)_updateIsCMMEnabled;
-(void)_updateIsCPLEnabled;
-(void)_updateIsFeatureEnabled;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)statusDidChange:(id)arg0 ;


@end


#endif