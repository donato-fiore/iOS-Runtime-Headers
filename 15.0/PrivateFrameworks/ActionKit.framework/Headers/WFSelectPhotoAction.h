// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSELECTPHOTOACTION_H
#define WFSELECTPHOTOACTION_H

@class WFAction;



@interface WFSelectPhotoAction : WFAction



+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)selectMultiple;
-(id)pickerTypes;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif