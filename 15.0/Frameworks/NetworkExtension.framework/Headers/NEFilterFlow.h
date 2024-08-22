// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFILTERFLOW_H
#define NEFILTERFLOW_H

@class NSURL, NSData, NSUUID, NSString, NSMutableArray;
@protocol NEPrettyDescription, NSSecureCoding, NSCopying, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEFilterAbsoluteVerdict.h"

@interface NEFilterFlow : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying>



@property (copy) NSURL *URL; // ivar: _URL
@property (retain) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (retain) NSData *crypto_signature; // ivar: _crypto_signature
@property (retain) NEFilterAbsoluteVerdict *currentVerdict; // ivar: _currentVerdict
@property NSInteger direction; // ivar: _direction
@property int epid; // ivar: _epid
@property (copy) NSUUID *flowUUID; // ivar: _flowUUID
@property (readonly) NSUUID *identifier;
@property (readonly, nonatomic) NSString *identifierString;
@property NSUInteger inBytes; // ivar: _inBytes
@property BOOL isPaused; // ivar: _isPaused
@property BOOL isRemediationFlow; // ivar: _isRemediationFlow
@property NSUInteger outBytes; // ivar: _outBytes
@property int pid; // ivar: _pid
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property BOOL reportAtEnd; // ivar: _reportAtEnd
@property (retain) NSMutableArray *savedMessageHandlerQueue; // ivar: _savedMessageHandlerQueue
@property (retain) NSData *sourceAppAuditToken; // ivar: _sourceAppAuditToken
@property (copy) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property BOOL sourceAppIdentifierFromApp; // ivar: _sourceAppIdentifierFromApp
@property (copy) NSData *sourceAppUniqueIdentifier; // ivar: _sourceAppUniqueIdentifier
@property (copy) NSString *sourceAppVersion; // ivar: _sourceAppVersion


+(BOOL)supportsSecureCoding;
-(BOOL)createDataCompleteReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createDataReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createNewFlowReply:(id)arg0 controlSocket:(int)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(BOOL)shouldCloseWithVerdict:(id)arg0 ;
-(BOOL)updateCurrentVerdictFromDataVerdict:(id)arg0 direction:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 sourceAppIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSourceAppInfo:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif