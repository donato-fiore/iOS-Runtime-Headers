// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDBAAATTESTATION_H
#define FMDBAAATTESTATION_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDBAAAttestation : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *attestation; // ivar: _attestation
@property (retain, nonatomic) NSData *signature; // ivar: _signature


+(BOOL)supportsSecureCoding;
-(id)initWithAttestation:(id)arg0 signature:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif