// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMFALLDETECTIONMANAGER_H
#define CMFALLDETECTIONMANAGER_H

@class NSString;
@protocol CMFallDetectionManagerInternalDelegate, CMFallDetectionDelegate;

#import <Foundation/Foundation.h>

#import "CMFallDetectionManagerInternal.h"

@interface CMFallDetectionManager : NSObject <CMFallDetectionManagerInternalDelegate>

 {
    CMFallDetectionManagerInternal *_internal;
}


@property (readonly, nonatomic) NSInteger authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CMFallDetectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isAvailable;
-(id)init;
-(void)_updateDelegateWithFallEvent:(id)arg0 ;
-(void)dealloc;
-(void)fallDetectionManagerInternal:(id)arg0 didUpdateFallEvent:(id)arg1 ;
-(void)fallDetectionManagerInternalDidStartBackgroundSession:(id)arg0 ;
-(void)fallDetectionManagerInternalDidUpdateEnablementState:(id)arg0 ;
-(void)requestAuthorizationWithHandler:(id)arg0 ;


@end


#endif