// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSELECTMUSICACTIONUIKITUSERINTERFACE_H
#define WFSELECTMUSICACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol MPMediaPickerControllerDelegate, WFSelectMusicActionUserInterface;



@interface WFSelectMusicActionUIKitUserInterface : WFEmbeddableActionUserInterface <MPMediaPickerControllerDelegate, WFSelectMusicActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithOutput:(id)arg0 error:(id)arg1 ;
-(void)mediaPicker:(id)arg0 didPickMediaItems:(id)arg1 ;
-(void)mediaPickerDidCancel:(id)arg0 ;
-(void)showWithSelectMultiple:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif