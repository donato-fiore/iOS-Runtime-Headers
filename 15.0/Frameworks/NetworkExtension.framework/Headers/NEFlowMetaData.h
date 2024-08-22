// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFLOWMETADATA_H
#define NEFLOWMETADATA_H

@class NSUUID, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>



@property (readonly) BOOL fastOpenRequested; // ivar: _fastOpenRequested
@property (readonly) NSUUID *filterFlowIdentifier; // ivar: _filterFlowIdentifier
@property (readonly) BOOL multipathRequested; // ivar: _multipathRequested
@property (readonly) NSData *sourceAppAuditToken; // ivar: _sourceAppAuditToken
@property (readonly) NSString *sourceAppSigningIdentifier; // ivar: _sourceAppSigningIdentifier
@property (readonly) NSData *sourceAppUniqueIdentifier; // ivar: _sourceAppUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromFlow:(struct _NEFlow *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProcessUUID:(id)arg0 signingIdentifier:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg0 signingIdentifier:(id)arg1 fastOpenRequested:(BOOL)arg2 multipathRequested:(BOOL)arg3 audit_token:(id)arg4 filterFlowID:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif