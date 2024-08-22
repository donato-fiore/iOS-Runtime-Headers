// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEEXTENSION_H
#define DEEXTENSION_H

@class NSString, NSMutableArray, NSExtension;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DEExtensionHostContext.h"

@interface DEExtension : NSObject

@property BOOL adoptsExtensionTrackerFlow; // ivar: _adoptsExtensionTrackerFlow
@property (nonatomic) BOOL allowUserAttachmentSelection; // ivar: _allowUserAttachmentSelection
@property (retain, nonatomic) NSString *attachmentsName; // ivar: _attachmentsName
@property NSInteger callCount; // ivar: _callCount
@property (retain) DEExtensionHostContext *context; // ivar: _context
@property (retain) NSMutableArray *contextFetchHandlers; // ivar: _contextFetchHandlers
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property BOOL isFetchingExtensionHostContext; // ivar: _isFetchingExtensionHostContext
@property (nonatomic) BOOL isLoggingEnabled; // ivar: _isLoggingEnabled
@property (retain, nonatomic) NSString *loggingConsent; // ivar: _loggingConsent
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(BOOL)checkAndTeardown;
-(id)description;
-(id)initWithNSExtension:(id)arg0 ;
-(void)attachmentListWithHandler:(id)arg0 ;
-(void)attachmentsForParameters:(id)arg0 andHandler:(id)arg1 ;
-(void)createExtensionHostContextCompletion:(id)arg0 ;
-(void)dealloc;
-(void)endUsingExtension;
-(void)performWithHostContext:(id)arg0 ;
-(void)setupWithParameters:(id)arg0 session:(id)arg1 ;
-(void)setupWithParameters:(id)arg0 session:(id)arg1 expirationDate:(id)arg2 ;
-(void)teardownWithParameters:(id)arg0 session:(id)arg1 ;


@end


#endif