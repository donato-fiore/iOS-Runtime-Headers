// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXEXTENSIONCALLSOURCE_H
#define CXEXTENSIONCALLSOURCE_H

@class NSExtension;
@protocol NSCopying;


#import "CXCallSource.h"
#import "CXProviderExtensionHostContext.h"

@interface CXExtensionCallSource : CXCallSource

@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) CXProviderExtensionHostContext *extensionContext; // ivar: _extensionContext
@property (copy, nonatomic) NSObject<NSCopying> *requestIdentifier; // ivar: _requestIdentifier


-(id)bundle;
-(id)init;
-(id)initWithExtension:(id)arg0 ;
-(id)initWithExtensionIdentifier:(id)arg0 ;
-(id)vendorProtocolDelegate;
-(int)processIdentifier;
-(void)beginWithCompletionHandler:(id)arg0 ;


@end


#endif