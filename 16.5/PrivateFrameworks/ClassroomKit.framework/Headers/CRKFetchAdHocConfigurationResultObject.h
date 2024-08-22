// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHADHOCCONFIGURATIONRESULTOBJECT_H
#define CRKFETCHADHOCCONFIGURATIONRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif