// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHAPPSRESULTOBJECT_H
#define DMFFETCHAPPSRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface DMFFetchAppsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *appsByBundleIdentifier; // ivar: _appsByBundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAppsByBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif