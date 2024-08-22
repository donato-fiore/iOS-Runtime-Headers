// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUTVREMOTECONTROLLER_H
#define MRUTVREMOTECONTROLLER_H

@class NSString;
@protocol MRUEndpointControllerObserver, _MCStateDumpPropertyListTransformable, MRUTVRemoteControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRUEndpointController.h"

@interface MRUTVRemoteController : NSObject <MRUEndpointControllerObserver, _MCStateDumpPropertyListTransformable>



@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUTVRemoteControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MRUEndpointController *endpointController; // ivar: _endpointController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL showTVRemote; // ivar: _showTVRemote
@property (readonly) Class superclass;


-(NSInteger)launchContext;
-(id)_stateDumpObject;
-(id)airplayIdentifier;
-(id)initWithEndpointController:(id)arg0 ;
-(id)mediaRemoteIdentifier;
-(void)endpointController:(id)arg0 didChangeRoute:(id)arg1 ;
-(void)presentTVRemoteUsingApp:(BOOL)arg0 ;
-(void)prewarmIfNeeded;
-(void)updateShowTVRemote;


@end


#endif