// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSVIEWMODELLINK_H
#define IKJSVIEWMODELLINK_H

@class NSDictionary;
@protocol IKJSViewModelLink, _IKJSViewModelLinkProxy, _IKJSViewModelLink, IKJSViewModelLinkDelegate;


#import "IKJSEventListenerObject.h"
#import "IKDOMDocument.h"

@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLinkProxy, _IKJSViewModelLink>

 {
    BOOL _isClosed;
    ? _delegateFlags;
}


@property (weak, nonatomic) NSObject<IKJSViewModelLinkDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) IKDOMDocument *document; // ivar: _document
@property (copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary


-(id)asPrivateIKJSViewModelLink;
-(id)init;
-(void)_unhandled;
-(void)cancel;
-(void)close:(id)arg0 ;
-(void)dealloc;


@end


#endif