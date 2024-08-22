// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTUMBLRCOMPOSEINAPPPARAMETER_H
#define WFTUMBLRCOMPOSEINAPPPARAMETER_H

@class WFSwitchParameter;
@protocol ICAppInstallStatusObserver;



@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>





-(BOOL)isHidden;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(void)appRegistry:(id)arg0 installStatusChangedForApp:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif