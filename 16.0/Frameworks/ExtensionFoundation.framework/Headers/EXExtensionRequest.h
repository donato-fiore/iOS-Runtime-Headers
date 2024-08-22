// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXEXTENSIONREQUEST_H
#define EXEXTENSIONREQUEST_H

@class NSExtensionContext, NSXPCListenerEndpoint, NSArray, NSUUID, RBSProcessIdentifier, NSString, NSXPCConnection;
@protocol PKPlugInPrivate;

#import <Foundation/Foundation.h>

#import "_EXExtensionInstanceIdentifier.h"
#import "_EXPersona.h"

@interface EXExtensionRequest : NSObject

@property (retain) id *assertion; // ivar: _assertion
@property (weak) NSExtensionContext *context; // ivar: _context
@property (retain) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (copy) NSArray *inputItems; // ivar: _inputItems
@property (retain) _EXExtensionInstanceIdentifier *instanceIdentifier; // ivar: _instanceIdentifier
@property NSUInteger options; // ivar: _options
@property (retain) _EXPersona *persona; // ivar: _persona
@property (retain) NSUUID *pkUUID; // ivar: _pkUUID
@property (retain) NSObject<PKPlugInPrivate> *plugIn; // ivar: _plugIn
@property (retain) RBSProcessIdentifier *processIdentifier; // ivar: _processIdentifier
@property (copy) NSString *sandboxProfileName; // ivar: _sandboxProfileName
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)description;
-(id)init;
-(void)applyActiveWebPageAlternativeIfNeededForExtension:(id)arg0 ;
-(void)dealloc;


@end


#endif