// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSELECTMUSICACTION_H
#define WFSELECTMUSICACTION_H

@class WFAction;



@interface WFSelectMusicAction : WFAction

@property (readonly, nonatomic) BOOL selectMultiple;


+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif