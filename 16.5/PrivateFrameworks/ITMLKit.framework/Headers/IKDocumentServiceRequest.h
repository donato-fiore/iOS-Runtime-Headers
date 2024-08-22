// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOCUMENTSERVICEREQUEST_H
#define IKDOCUMENTSERVICEREQUEST_H

@class NSString, NSDictionary;
@protocol IKJSViewModelLinkDelegate;


#import "IKServiceRequest.h"
#import "IKJSViewModelLink.h"
#import "IKAppDocument.h"

@interface IKDocumentServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate>

 {
    IKJSViewModelLink *_link;
    ? _dsrDelegateFlags;
}


@property (readonly) IKAppDocument *appDocument; // ivar: _appDocument
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly) Class superclass;


-(void)didCloseViewModelLink:(id)arg0 withErrorDictionary:(id)arg1 ;
-(void)documentDidChangeForViewModelLink:(id)arg0 ;
-(void)onCancel;
-(void)onSend;
-(void)responseDictionaryDidChangeForViewModelLink:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif