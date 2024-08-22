// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTAKEPHOTOACTION_H
#define WFTAKEPHOTOACTION_H

@class WFAction;



@interface WFTakePhotoAction : WFAction

@property (nonatomic) NSUInteger remainingPhotos; // ivar: _remainingPhotos


+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)showCameraPreview;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif