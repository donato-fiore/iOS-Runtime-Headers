// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMLINKEDNOTEBOOK_H
#define EDAMLINKEDNOTEBOOK_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMLinkedNotebook : FATObject

@property (retain, nonatomic) NSNumber *businessId; // ivar: _businessId
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *noteStoreUrl; // ivar: _noteStoreUrl
@property (retain, nonatomic) NSString *shardId; // ivar: _shardId
@property (retain, nonatomic) NSString *shareName; // ivar: _shareName
@property (retain, nonatomic) NSString *sharedNotebookGlobalId; // ivar: _sharedNotebookGlobalId
@property (retain, nonatomic) NSString *stack; // ivar: _stack
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum
@property (retain, nonatomic) NSString *uri; // ivar: _uri
@property (retain, nonatomic) NSString *username; // ivar: _username
@property (retain, nonatomic) NSString *webApiUrlPrefix; // ivar: _webApiUrlPrefix


+(id)structFields;
+(id)structName;


@end


#endif