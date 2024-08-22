// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRECORDAUDIOACTION_H
#define WFRECORDAUDIOACTION_H

@class WFAction;



@interface WFRecordAudioAction : WFAction

@property (readonly, nonatomic) NSInteger outputFormat;
@property (readonly, nonatomic) CGFloat recordingDuration;
@property (readonly, nonatomic) BOOL startImmediately;


+(BOOL)outputIsExemptFromTaintTrackingInheritance;
+(id)datedFilenameForFormat:(NSInteger)arg0 ;
+(id)fileTypeForFormat:(NSInteger)arg0 ;
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif