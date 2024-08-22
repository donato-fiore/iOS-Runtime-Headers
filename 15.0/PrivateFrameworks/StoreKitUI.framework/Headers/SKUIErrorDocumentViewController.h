// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIERRORDOCUMENTVIEWCONTROLLER_H
#define SKUIERRORDOCUMENTVIEWCONTROLLER_H

@class NSString;
@protocol SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIClientContext.h"

@interface SKUIErrorDocumentViewController : SKUIViewController <SKUIDocumentViewController>

 {
    SKUIClientContext *_clientContext;
    NSUInteger _contentUnavailableStyle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *retryActionBlock; // ivar: _retryActionBlock
@property (readonly) Class superclass;


-(id)initWithBackgroundColor:(id)arg0 clientContext:(id)arg1 ;
-(void)documentDidUpdate:(id)arg0 ;
-(void)loadView;


@end


#endif