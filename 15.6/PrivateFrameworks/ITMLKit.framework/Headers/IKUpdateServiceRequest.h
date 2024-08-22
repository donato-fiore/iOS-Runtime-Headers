// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKUPDATESERVICEREQUEST_H
#define IKUPDATESERVICEREQUEST_H

@class NSString;
@protocol IKJSViewModelLinkDelegate;


#import "IKServiceRequest.h"
#import "IKJSViewModelLink.h"

@interface IKUpdateServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate>

 {
    IKJSViewModelLink *_link;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didCloseViewModelLink:(id)arg0 withErrorDictionary:(id)arg1 ;
-(void)documentDidChangeForViewModelLink:(id)arg0 ;
-(void)onCancel;
-(void)onSend;


@end


#endif