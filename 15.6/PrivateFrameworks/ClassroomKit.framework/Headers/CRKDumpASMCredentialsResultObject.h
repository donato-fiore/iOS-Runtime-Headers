// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKDUMPASMCREDENTIALSRESULTOBJECT_H
#define CRKDUMPASMCREDENTIALSRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface CRKDumpASMCredentialsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *credentials; // ivar: _credentials


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif