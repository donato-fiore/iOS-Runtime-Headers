// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENBUSINESSNOTESTORECLIENT_H
#define ENBUSINESSNOTESTORECLIENT_H

@class NSString;
@protocol ENBusinessNoteStoreClientDelegate;


#import "ENNoteStoreClient.h"

@interface ENBusinessNoteStoreClient : ENNoteStoreClient

@property (weak, nonatomic) NSObject<ENBusinessNoteStoreClientDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *noteStoreUrl; // ivar: _noteStoreUrl


+(id)noteStoreClientForBusiness;
-(id)authenticationToken;
-(void)createBusinessNotebook:(id)arg0 completion:(id)arg1 ;
// -(void)createBusinessNotebook:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;


@end


#endif