// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERFLOW_H
#define NEFILTERFLOW_H

@class NSUUID, NSMutableArray, NSURL, NSData, NSString;
@protocol NEPrettyDescription, NSSecureCoding, NSCopying, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "NEFilterAbsoluteVerdict.h"

@interface NEFilterFlow : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying>

 {
    BOOL _isRemediationFlow;
    BOOL _isPaused;
    BOOL _reportAtEnd;
    BOOL _sourceAppIdentifierFromApp;
    int _pid;
    int _epid;
    NEFilterAbsoluteVerdict *_currentVerdict;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_flowUUID;
    NSMutableArray *_savedMessageHandlerQueue;
    NSObject<OS_xpc_object> *_connection;
}


@property (copy) NSURL *URL; // ivar: _URL
@property (retain) NSData *crypto_signature; // ivar: _crypto_signature
@property NSInteger direction; // ivar: _direction
@property (readonly) NSUUID *identifier;
@property (readonly, nonatomic) NSString *identifierString;
@property NSUInteger inBytes; // ivar: _inBytes
@property NSUInteger outBytes; // ivar: _outBytes
@property (retain) NSData *sourceAppAuditToken; // ivar: _sourceAppAuditToken
@property (copy) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property (copy) NSData *sourceAppUniqueIdentifier; // ivar: _sourceAppUniqueIdentifier
@property (copy) NSString *sourceAppVersion; // ivar: _sourceAppVersion


+(BOOL)supportsSecureCoding;
-(BOOL)createDataCompleteReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createDataReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createNewFlowReply:(id)arg0 controlSocket:(int)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 sourceAppIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif