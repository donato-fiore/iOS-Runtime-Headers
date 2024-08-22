// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMEDIACOMPLICATIONCONTROLLER_H
#define NTKMEDIACOMPLICATIONCONTROLLER_H

@class MPRequestResponseController, NSString;
@protocol MPRequestResponseControllerDelegate, NTKMediaComplicationControllerDelegate;

#import <Foundation/Foundation.h>


@interface NTKMediaComplicationController : NSObject <MPRequestResponseControllerDelegate>

 {
    MPRequestResponseController *_requestResponseController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKMediaComplicationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)launchURLWithScheme:(id)arg0 ;
-(void)_handleRoutingControllerActiveSystemRouteDidChange:(id)arg0 ;
-(void)_updateActiveRoute;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)pause;
-(void)resume;


@end


#endif