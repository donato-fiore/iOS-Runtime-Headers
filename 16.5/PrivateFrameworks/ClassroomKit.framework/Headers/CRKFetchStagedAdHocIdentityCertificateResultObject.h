// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHSTAGEDADHOCIDENTITYCERTIFICATERESULTOBJECT_H
#define CRKFETCHSTAGEDADHOCIDENTITYCERTIFICATERESULTOBJECT_H

@class CATTaskResultObject, NSData;



@interface CRKFetchStagedAdHocIdentityCertificateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *stagedAdHocIdentityCertificate; // ivar: _stagedAdHocIdentityCertificate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif