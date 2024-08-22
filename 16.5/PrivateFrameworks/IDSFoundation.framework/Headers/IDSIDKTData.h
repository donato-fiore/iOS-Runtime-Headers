// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSIDKTDATA_H
#define IDSIDKTDATA_H

@class NSUUID, KTVerifierResult;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSIDKTData : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *verificationRequestID; // ivar: _verificationRequestID
@property (readonly, copy, nonatomic) KTVerifierResult *verifierResult; // ivar: _verifierResult


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVerifierResult:(id)arg0 requestID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif