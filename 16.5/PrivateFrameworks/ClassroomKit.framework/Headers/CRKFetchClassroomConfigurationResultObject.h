// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHCLASSROOMCONFIGURATIONRESULTOBJECT_H
#define CRKFETCHCLASSROOMCONFIGURATIONRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (copy, nonatomic) NSDictionary *configurationsByType; // ivar: _configurationsByType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif