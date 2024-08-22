// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBAPPLICATIONTERMINATIONASSERTIONSERVICE_H
#define FBAPPLICATIONTERMINATIONASSERTIONSERVICE_H

@class NSString;
@protocol BKSTerminationAssertionObserver, FBApplicationTerminationAssertionServiceDelegate;

#import <Foundation/Foundation.h>


@interface FBApplicationTerminationAssertionService : NSObject <BKSTerminationAssertionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBApplicationTerminationAssertionServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSUInteger)_efficacyForReason:(id)arg0 ;
-(id)_reasonForEfficacy:(NSUInteger)arg0 ;
-(id)init;
-(id)terminationAssertionsForBundleID:(id)arg0 ;
-(id)terminationAssertionsForBundleID:(id)arg0 withReason:(id)arg1 ;
-(void)_notifyDelegateOfAcquisitionForBundleID:(id)arg0 efficacy:(NSUInteger)arg1 ;
-(void)_notifyDelegateOfRelinquishForBundleID:(id)arg0 ;
-(void)dealloc;
-(void)noteTerminationAssertionEfficacyChangedTo:(NSUInteger)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif