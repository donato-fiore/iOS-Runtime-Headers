// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSYNAPSELINKPREVIEWLOADINGOPERATION_H
#define ICSYNAPSELINKPREVIEWLOADINGOPERATION_H

@class SYContentItem;

#import <Foundation/Foundation.h>


@interface ICSynapseLinkPreviewLoadingOperation : NSObject {
    SYContentItem *_synapseItem;
    id *_completionBlock;
}




-(id)initWithSynapseItem:(id)arg0 ;
-(void)linkPreviewDidFinishLoading:(id)arg0 ;
-(void)loadPreviewWithCompletionBlock:(id)arg0 ;


@end


#endif