// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMOVEPHOTOSURLREQUEST_H
#define CKDMOVEPHOTOSURLREQUEST_H

@class NSArray, NSMutableDictionary;


#import "CKDURLRequest.h"

@interface CKDMovePhotosURLRequest : CKDURLRequest

@property (nonatomic) BOOL atomic; // ivar: _atomic
@property (retain, nonatomic) NSArray *moveChanges; // ivar: _moveChanges
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID; // ivar: _recordByRequestID
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // ivar: _recordIDByRequestID
@property (copy, nonatomic) id *recordPostedBlock; // ivar: _recordPostedBlock
@property (nonatomic) NSInteger sourceDatabaseScope; // ivar: _sourceDatabaseScope


-(BOOL)handlesAnonymousCKUserIDPropagation;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 moveChanges:(id)arg1 sourceDatabaseScope:(NSInteger)arg2 atomic:(BOOL)arg3 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(int)isolationLevel;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif