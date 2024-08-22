// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKKSEXTERNALTLKSHARE_H
#define CKKSEXTERNALTLKSHARE_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKKSExternalTLKShare : NSObject <NSSecureCoding>



@property (readonly) NSData *receiverPeerID; // ivar: _receiverPeerID
@property (readonly) NSData *senderPeerID; // ivar: _senderPeerID
@property (readonly) NSData *signature; // ivar: _signature
@property (readonly) NSString *tlkUUID; // ivar: _tlkUUID
@property (readonly) NSString *view; // ivar: _view
@property (readonly) NSData *wrappedTLK; // ivar: _wrappedTLK


+(BOOL)supportsSecureCoding;
+(id)parseFromJSONDict:(id)arg0 error:(*id)arg1 ;
+(id)unstringifyPeerID:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithView:(id)arg0 tlkUUID:(id)arg1 receiverPeerID:(id)arg2 senderPeerID:(id)arg3 wrappedTLK:(id)arg4 signature:(id)arg5 ;
-(id)jsonDictionary;
-(id)stringifyPeerID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif