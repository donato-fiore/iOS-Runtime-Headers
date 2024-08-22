// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHMDMIDENTITYRESULTOBJECT_H
#define CRKFETCHMDMIDENTITYRESULTOBJECT_H

@class CATTaskResultObject, NSString, NSData;



@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject

@property (retain, nonatomic) NSString *mdmIdentityCommonName; // ivar: _mdmIdentityCommonName
@property (retain, nonatomic) NSData *mdmIdentityPersistentID; // ivar: _mdmIdentityPersistentID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif