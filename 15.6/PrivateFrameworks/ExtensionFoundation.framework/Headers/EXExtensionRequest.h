// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXEXTENSIONREQUEST_H
#define EXEXTENSIONREQUEST_H

@class NSExtensionContext, NSXPCListenerEndpoint, NSArray, NSUUID, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface EXExtensionRequest : NSObject

@property (retain) id *assertion; // ivar: _assertion
@property (weak) NSExtensionContext *context; // ivar: _context
@property (retain) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (copy) NSArray *inputItems; // ivar: _inputItems
@property NSUInteger options; // ivar: _options
@property (retain) NSUUID *pkUUID; // ivar: _pkUUID
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)description;
-(id)init;
-(void)applyActiveWebPageAlternativeIfNeededForExtension:(id)arg0 ;
-(void)dealloc;


@end


#endif