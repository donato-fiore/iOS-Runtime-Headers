// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKPEERPICKERCONTROLLER_H
#define GKPEERPICKERCONTROLLER_H

@protocol GKPeerPickerControllerDelegate;

#import <Foundation/Foundation.h>

#import "GKPeerPickerViewController.h"

@interface GKPeerPickerController : NSObject

@property (nonatomic) NSUInteger connectionTypesMask;
@property (weak, nonatomic) NSObject<GKPeerPickerControllerDelegate> *delegate;
@property (retain) id *picker; // ivar: _picker
@property (readonly, nonatomic) GKPeerPickerViewController *pickerViewController;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;


+(void)initialize;
-(id)init;
-(id)peerPickerViewController:(id)arg0 sessionForConnectionType:(NSUInteger)arg1 ;
-(void)_createPicker;
-(void)dealloc;
-(void)dismiss;
-(void)peerPickerViewController:(id)arg0 didConnectPeer:(id)arg1 toSession:(id)arg2 ;
-(void)peerPickerViewController:(id)arg0 didSelectConnectionType:(NSUInteger)arg1 ;
-(void)peerPickerViewControllerDidCancel:(id)arg0 ;
-(void)show;


@end


#endif