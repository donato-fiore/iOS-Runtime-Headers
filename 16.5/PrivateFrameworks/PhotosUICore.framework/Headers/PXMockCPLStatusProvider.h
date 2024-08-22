// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMOCKCPLSTATUSPROVIDER_H
#define PXMOCKCPLSTATUSPROVIDER_H

@class NSString;
@protocol PXSettingsKeyObserver, PXCPLStatusProvider;


#import "PXObservable.h"
#import "PXCPLStatus.h"

@interface PXMockCPLStatusProvider : PXObservable <PXSettingsKeyObserver, PXCPLStatusProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXCPLStatus *status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)shouldUseMockService;
+(id)_currentMockedStatus;
-(CGFloat)nextOverrideResumeTimeInterval;
-(id)init;
-(void)_updateStatus;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif