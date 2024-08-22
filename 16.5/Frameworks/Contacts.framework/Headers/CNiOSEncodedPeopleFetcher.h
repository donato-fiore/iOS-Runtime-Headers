// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSENCODEDPEOPLEFETCHER_H
#define CNIOSENCODEDPEOPLEFETCHER_H

@class CNManagedConfiguration, NSString;
@protocol CNEncodedFetchCursor, CNContactsLogger;

#import <Foundation/Foundation.h>

#import "CNContactFetchRequest.h"
#import "CNContactsEnvironment.h"

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor>

 {
    *void _addressBook;
    CNContactFetchRequest *_contactFetchRequest;
    CNContactsEnvironment *_environment;
    id *_addressBookCompletionHandler;
    id *_cursorCompletionHandler;
    id<CNEncodedFetchCursor> *_cursor;
    id<CNContactsLogger> *_logger;
    CNManagedConfiguration *_managedConfiguration;
    NSInteger _identifierAuditMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preferLinkIdentifiersForIdentifierAudit; // ivar: _preferLinkIdentifiersForIdentifierAudit
@property (readonly) Class superclass;


-(BOOL)fetchEncodedPeopleWithError:(*id)arg0 cancelationToken:(id)arg1 batchHandler:(id)arg2 ;
// -(id)initWithFetchRequest:(id)arg0 addressBook:(*void)arg1 managedConfiguration:(id)arg2 addressBookCompletionHandler:(id)arg3 cursorCompletionHandler:(unk)arg4 environment:(id)arg5 identifierAuditMode:(unk)arg6  ;
-(void)dealloc;
-(void)fetchNextBatchWithReply:(id)arg0 ;


@end


#endif