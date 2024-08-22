// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYEXITASSISTANTCONTEXT_H
#define PXSHAREDLIBRARYEXITASSISTANTCONTEXT_H

@class NSProgress, NSString;
@protocol PXSharedLibraryExitAssistantViewControllerDelegate, PXAssistantContext, PXSharedLibrary;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryExitAssistantContext : NSObject <PXSharedLibraryExitAssistantViewControllerDelegate, PXAssistantContext>



@property (retain, nonatomic) NSProgress *activityProgress; // ivar: _activityProgress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger exitRetentionPolicy; // ivar: _exitRetentionPolicy
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXSharedLibrary> *sharedLibrary; // ivar: _sharedLibrary
@property (readonly) Class superclass;


-(BOOL)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithSharedLibrary:(id)arg0 exitRetentionPolicy:(NSInteger)arg1 ;
-(id)initialStepContextIdentifiers;
-(id)nextStepContextIdentifierFromStepContextIdentifier:(id)arg0 ;
-(id)stepContextForStepContextIdentifier:(id)arg0 ;
-(void)exitAssistantViewController:(id)arg0 didSetActivityProgress:(id)arg1 ;
-(void)exitAssistantViewController:(id)arg0 didSetExitRetentionPolicy:(NSInteger)arg1 ;
-(void)stepContextWithIdentifier:(id)arg0 confirmCancellationWithAlertProperties:(id)arg1 ;


@end


#endif