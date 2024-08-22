// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGETFOLDERCONTENTSACTION_H
#define WFGETFOLDERCONTENTSACTION_H

@class WFAction;



@interface WFGetFolderContentsAction : WFAction



+(id)contentsOfDirectory:(id)arg0 includingSubfolders:(BOOL)arg1 error:(*id)arg2 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif