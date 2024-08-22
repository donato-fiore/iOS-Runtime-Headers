// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SSUSOUNDSCAPESDELEGATEFORWARDER_H
#define _SSUSOUNDSCAPESDELEGATEFORWARDER_H

@class MPPlaybackArchive, NSError, UIBarButtonItem, NSXPCConnection, NSString, _EXHostViewController;
@protocol SSUViewServiceHostProtocol, SSUSoundscapesPickerControllerDelegate;

#import <Foundation/Foundation.h>


@interface _SSUSoundScapesDelegateForwarder : NSObject <SSUViewServiceHostProtocol>

 {
    MPPlaybackArchive *_lastPickedArchive;
    NSError *_lastPickedError;
    UIBarButtonItem *_doneButton;
    BOOL _exiting;
}


@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SSUSoundscapesPickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) _EXHostViewController *viewController; // ivar: _viewController


-(id)initForViewController:(id)arg0 ;
-(void)cleanup;
-(void)mediaPickerConfirmChoices;
-(void)pickerDismissed;
-(void)requestDismiss;
-(void)selectedSoundScapes:(id)arg0 withError:(id)arg1 ;
-(void)updateNavigationItem;


@end


#endif