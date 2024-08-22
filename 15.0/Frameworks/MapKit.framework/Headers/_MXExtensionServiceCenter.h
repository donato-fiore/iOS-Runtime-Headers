// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXEXTENSIONSERVICECENTER_H
#define _MXEXTENSIONSERVICECENTER_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MXExtensionProvider.h"

@interface _MXExtensionServiceCenter : NSObject {
    NSObject<OS_dispatch_queue> *_extlock;
    NSDictionary *_extensions;
    NSDictionary *_mapsExtensions;
    NSDictionary *_containingAppProxies;
}


@property (copy, nonatomic) NSDictionary *containingAppProxies;
@property (readonly, weak, nonatomic) _MXExtensionProvider *extensionProvider; // ivar: _extensionProvider
@property (copy, nonatomic) NSDictionary *extensions;
@property (copy, nonatomic) NSDictionary *mapsExtensions;


-(id)_extensionWithIdentifier:(id)arg0 ;
-(id)_siblingExtensionsWithContainingAppIdentifer:(id)arg0 ;
-(id)allExtensions;
-(id)initWithExtensionProvider:(id)arg0 ;
-(void)_clearExtensions;
-(void)receivedExtensions:(id)arg0 error:(id)arg1 ;


@end


#endif