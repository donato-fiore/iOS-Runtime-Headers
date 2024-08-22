// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFFETCHCERTIFICATESRESULTOBJECT_H
#define DMFFETCHCERTIFICATESRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchCertificatesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *certificates; // ivar: _certificates


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCertificates:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif