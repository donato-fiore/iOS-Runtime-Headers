// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXIPCMESSAGE_H
#define AXIPCMESSAGE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXIPCMessage : NSObject <NSSecureCoding>



@property (nonatomic) ? auditToken; // ivar: _auditToken
@property (nonatomic) unsigned int clientPort; // ivar: _clientPort
@property (nonatomic) int key; // ivar: _key
@property (copy, nonatomic) NSDictionary *payload; // ivar: _payload
@property (nonatomic) BOOL processedMessage; // ivar: _processedMessage
@property (readonly, copy, nonatomic) NSString *senderBundleId;
@property (nonatomic) NSUInteger uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
+(id)archivedMessageFromData:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(int)arg0 ;
-(id)initWithKey:(int)arg0 payload:(id)arg1 ;
-(id)initWithKey:(int)arg0 payload:(id)arg1 keyDebugInfo:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif