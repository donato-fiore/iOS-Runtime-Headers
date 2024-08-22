// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHNOTIFICATIONCHANGESURLREQUEST_H
#define CKDFETCHNOTIFICATIONCHANGESURLREQUEST_H

@class NSArray, NSData;


#import "CKDURLRequest.h"

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest

@property (nonatomic) BOOL moreComing; // ivar: _moreComing
@property (readonly, nonatomic) NSArray *resultChangedNotifications; // ivar: _resultChangedNotifications
@property (retain, nonatomic) NSData *resultServerChangeTokenData; // ivar: _resultServerChangeTokenData
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (retain, nonatomic) NSData *serverChangeTokenData; // ivar: _serverChangeTokenData
@property (nonatomic) BOOL wantsChanges; // ivar: _wantsChanges


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 serverChangeTokenData:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif