// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPROVIDERXPCLISTENER_H
#define NEPROVIDERXPCLISTENER_H

@class NSXPCListener, NSString;



@interface NEProviderXPCListener : NSXPCListener

@property (readonly, nonatomic) NSString *extensionContextClassName; // ivar: _extensionContextClassName


-(id)initWithExtensionContextClassName:(id)arg0 ;


@end


#endif