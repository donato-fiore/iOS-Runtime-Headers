// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTUMBLRACCESSRESOURCEUSERINTERFACE_H
#define WFTUMBLRACCESSRESOURCEUSERINTERFACE_H

@class WFEmbeddableActionUserInterface;
@protocol WFTumblrAccessResourceUserInterfaceProtocol;



@interface WFTumblrAccessResourceUserInterface : WFEmbeddableActionUserInterface <WFTumblrAccessResourceUserInterfaceProtocol>





-(id)initWithUserInterfaceType:(id)arg0 attribution:(id)arg1 ;
-(void)authorizeWithCompletionHandler:(id)arg0 ;


@end


#endif