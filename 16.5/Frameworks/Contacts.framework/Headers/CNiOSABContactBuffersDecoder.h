// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSABCONTACTBUFFERSDECODER_H
#define CNIOSABCONTACTBUFFERSDECODER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CNContactBufferDecoder.h"

@interface CNiOSABContactBuffersDecoder : NSObject

@property (readonly, nonatomic) NSMutableArray *contactsWaitingForUnification; // ivar: _contactsWaitingForUnification
@property (readonly, nonatomic) NSUInteger decodeBatchSize; // ivar: _decodeBatchSize
@property (readonly, nonatomic) CNContactBufferDecoder *decoder; // ivar: _decoder
@property (readonly, nonatomic) NSMutableDictionary *matchInfosWaitingForUnification; // ivar: _matchInfosWaitingForUnification
@property (readonly, nonatomic) BOOL mutableResults; // ivar: _mutableResults
@property (readonly, nonatomic) BOOL unifyResults; // ivar: _unifyResults


// -(BOOL)decodeContactsFromData:(id)arg0 moreComing:(BOOL)arg1 replyHandler:(id)arg2 error:(unk)arg3  ;
-(id)_contactMatchInfosFromABMatchInfos:(id)arg0 contacts:(id)arg1 ;
-(id)contactMatchInfosFromABMatchInfos:(id)arg0 contacts:(id)arg1 ;
-(id)init;
-(id)initWithDecoder:(id)arg0 unifyResults:(BOOL)arg1 mutableResults:(BOOL)arg2 decodeBatchLimit:(NSUInteger)arg3 ;
-(id)initWithFetchRequest:(id)arg0 ;
-(id)unifyContacts:(id)arg0 moreComing:(BOOL)arg1 ;
-(void)_addContactMatchInfoFromABMatchInfos:(id)arg0 forContact:(id)arg1 toDictionary:(id)arg2 ;


@end


#endif