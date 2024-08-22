// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFRECORDAUDIOACTIONUIKITUSERINTERFACE_H
#define WFRECORDAUDIOACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFRecordAudioActionUserInterface;



@interface WFRecordAudioActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFRecordAudioActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithFileRepresentation:(id)arg0 error:(id)arg1 ;
-(void)showWithOutputFormat:(NSInteger)arg0 startImmediately:(BOOL)arg1 recordingDuration:(CGFloat)arg2 completionHandler:(id)arg3 ;


@end


#endif