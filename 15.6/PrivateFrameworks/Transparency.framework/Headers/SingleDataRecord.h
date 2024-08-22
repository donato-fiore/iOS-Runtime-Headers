// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SINGLEDATARECORD_H
#define SINGLEDATARECORD_H

@class NSData, NSMutableArray;
@protocol TLSMessage;


#import "TLSMessage.h"

@interface SingleDataRecord : TLSMessage <TLSMessage>



@property BOOL accountMismatch; // ivar: _accountMismatch
@property NSUInteger addedMs; // ivar: _addedMs
@property NSUInteger appVersion; // ivar: _appVersion
@property (retain) NSData *clientDataHash; // ivar: _clientDataHash
@property NSUInteger escrowExpiryMs; // ivar: _escrowExpiryMs
@property NSUInteger expiryMs; // ivar: _expiryMs
@property (retain) NSMutableArray *extensions; // ivar: _extensions
@property NSUInteger markedForDeletionMs; // ivar: _markedForDeletionMs
@property NSUInteger parsedLength; // ivar: _parsedLength


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)data;
-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif