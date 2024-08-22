// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACCOUNTACCESSRESOURCEUSERINTERFACE_H
#define WFACCOUNTACCESSRESOURCEUSERINTERFACE_H

@class WFEmbeddableActionUserInterface;
@protocol WFAccountAccessResourceUserInterfaceProtocol;



@interface WFAccountAccessResourceUserInterface : WFEmbeddableActionUserInterface <WFAccountAccessResourceUserInterfaceProtocol>





-(id)initWithUserInterfaceType:(id)arg0 attribution:(id)arg1 ;
-(void)authorizeWithAccountClassName:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif