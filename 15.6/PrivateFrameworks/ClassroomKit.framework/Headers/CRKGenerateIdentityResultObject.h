// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKGENERATEIDENTITYRESULTOBJECT_H
#define CRKGENERATEIDENTITYRESULTOBJECT_H

@class CATTaskResultObject, NSData;



@interface CRKGenerateIdentityResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (copy, nonatomic) NSData *privateKeyData; // ivar: _privateKeyData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif