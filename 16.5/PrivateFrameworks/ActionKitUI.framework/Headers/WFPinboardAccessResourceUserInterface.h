// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPINBOARDACCESSRESOURCEUSERINTERFACE_H
#define WFPINBOARDACCESSRESOURCEUSERINTERFACE_H

@class WFEmbeddableActionUserInterface;
@protocol WFPinboardAccessResourceUserInterfaceProtocol;



@interface WFPinboardAccessResourceUserInterface : WFEmbeddableActionUserInterface <WFPinboardAccessResourceUserInterfaceProtocol>





-(id)initWithUserInterfaceType:(id)arg0 attribution:(id)arg1 ;
-(void)authorizeWithCompletionHandler:(id)arg0 ;


@end


#endif