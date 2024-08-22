// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAKEYBINDINGATTESTATIONREQUESTDATA_H
#define DAKEYBINDINGATTESTATIONREQUESTDATA_H

@class NSData, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAKeyBindingAttestationRequestData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *casd; // ivar: _casd
@property (readonly, nonatomic) NSData *rsaCertData; // ivar: _rsaCertData
@property (readonly, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier
@property (readonly, nonatomic) NSData *subCaAttestation; // ivar: _subCaAttestation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSharingSessionIdentifier:(id)arg0 subCaAttestation:(id)arg1 casd:(id)arg2 rsaCertData:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif