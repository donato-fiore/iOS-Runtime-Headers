// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUTVREMOTECONTROLLER_H
#define MRUTVREMOTECONTROLLER_H

@class NSString;
@protocol _MCStateDumpPropertyListTransformable;

#import <Foundation/Foundation.h>

#import "MediaControlsEndpointController.h"

@interface MRUTVRemoteController : NSObject <_MCStateDumpPropertyListTransformable>



@property (readonly, nonatomic) NSString *airplayIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MediaControlsEndpointController *endpointController; // ivar: _endpointController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCoverSheet; // ivar: _isCoverSheet
@property (readonly, nonatomic) NSString *mediaRemoteIdentifier;
@property (readonly, nonatomic) BOOL shouldShowTVRemoteButton;
@property (readonly) Class superclass;


-(id)_stateDumpObject;
-(id)initWithEndpointController:(id)arg0 ;
-(void)presentLanguageOptionsAtCenter:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)presentTVRemote;
-(void)prewarmIfNeeded;


@end


#endif