// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISYSTEMAPERTUREELEMENTPRESENTATIONSESSION_H
#define SBUISYSTEMAPERTUREELEMENTPRESENTATIONSESSION_H

@class SBSSystemApertureSceneCreationRequest, NSString;
@protocol BSInvalidatable, SBUISystemApertureElementProviding;

#import <Foundation/Foundation.h>

#import "SBUISystemApertureElementSource.h"

@interface SBUISystemApertureElementPresentationSession : NSObject <BSInvalidatable>

 {
    id<SBUISystemApertureElementProviding> *_elementProvider;
    SBUISystemApertureElementSource *_associatedSource;
    SBSSystemApertureSceneCreationRequest *_request;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_associateWithSourceIfNeeded:(id)arg0 ;
-(void)_handleSourceDidConnect:(id)arg0 ;
-(void)activateWithElementProvider:(id)arg0 ;
-(void)invalidate;


@end


#endif