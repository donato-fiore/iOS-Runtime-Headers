// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEEXTENSION_H
#define DEEXTENSION_H

@class NSString, NSNumber, NSMutableArray, NSExtension;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DEExtensionHostContext.h"

@interface DEExtension : NSObject

@property BOOL adoptsExtensionTrackerFlow; // ivar: _adoptsExtensionTrackerFlow
@property (nonatomic) BOOL allowUserAttachmentSelection; // ivar: _allowUserAttachmentSelection
@property (retain, nonatomic) NSString *attachmentsName; // ivar: _attachmentsName
@property (retain) NSNumber *cachedRequiresDataClassBAccessToRun; // ivar: _cachedRequiresDataClassBAccessToRun
@property NSInteger callCount; // ivar: _callCount
@property (retain) DEExtensionHostContext *context; // ivar: _context
@property (retain) NSMutableArray *contextFetchHandlers; // ivar: _contextFetchHandlers
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property BOOL isFetchingExtensionHostContext; // ivar: _isFetchingExtensionHostContext
@property (readonly, nonatomic) BOOL isLoggingEnabled;
@property (retain, nonatomic) NSString *loggingConsent; // ivar: _loggingConsent
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(BOOL)checkAndTeardown;
-(BOOL)requiresDataClassBAccessToRun;
-(id)_fileContentsFromPlistWithKey:(id)arg0 localization:(id)arg1 ;
-(id)description;
-(id)initWithNSExtension:(id)arg0 ;
-(id)localizedConsentTextWithLocalization:(id)arg0 ;
-(id)localizedDataCollectedExplanationWithLocalization:(id)arg0 ;
-(id)localizedDataCollectedSummaryWithLocalization:(id)arg0 ;
-(id)loggingProfileURLsFromExtension;
-(void)accessBundleWithSynchronousHandler:(id)arg0 ;
-(void)attachmentListWithHandler:(id)arg0 ;
-(void)attachmentsForParameters:(id)arg0 andHandler:(id)arg1 ;
// -(void)attachmentsForParameters:(id)arg0 withProgressHandler:(id)arg1 andHandler:(unk)arg2  ;
-(void)createExtensionHostContextCompletion:(id)arg0 ;
-(void)dealloc;
-(void)endUsingExtension;
-(void)installLoggingProfileWithSessionID:(id)arg0 ;
-(void)performWithHostContext:(id)arg0 ;
-(void)removeLoggingProfileWithSessionID:(id)arg0 ;
-(void)setupWithParameters:(id)arg0 session:(id)arg1 ;
-(void)setupWithParameters:(id)arg0 session:(id)arg1 expirationDate:(id)arg2 ;
-(void)teardownWithParameters:(id)arg0 session:(id)arg1 ;


@end


#endif