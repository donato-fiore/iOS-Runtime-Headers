// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOVERSHEETBIOMETRICRESOURCEOBSERVER_H
#define SBCOVERSHEETBIOMETRICRESOURCEOBSERVER_H

@class NSString;
@protocol SBUIBiometricResourceObserver, SBPearlMatchingStateProvider, SBUIBiometricResource, SBPearlMatchingStateProviderDelegate;

#import <Foundation/Foundation.h>


@interface SBCoverSheetBiometricResourceObserver : NSObject <SBUIBiometricResourceObserver, SBPearlMatchingStateProvider>



@property (weak, nonatomic) NSObject<SBUIBiometricResource> *biometricResource; // ivar: _biometricResource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPearlMatchingStateProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL pearlMatchEnabledAndPossible;
@property (nonatomic) BOOL seenMatchResultSinceScreenOn; // ivar: _seenMatchResultSinceScreenOn
@property (readonly) Class superclass;


-(id)initWithBiometricResource:(id)arg0 ;
-(void)biometricResource:(id)arg0 observeEvent:(NSUInteger)arg1 ;
-(void)reset;


@end


#endif