// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MXEXTENSIONHOSTCONTEXT_H
#define _MXEXTENSIONHOSTCONTEXT_H

@class MXExtensionContext, NSString;
@protocol _MXExtensionHostContextType, _MXExtensionURLHandling;



@interface _MXExtensionHostContext : MXExtensionContext <_MXExtensionHostContextType>



@property (weak, nonatomic) NSObject<_MXExtensionURLHandling> *URLHandlingDelegate; // ivar: _URLHandlingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif