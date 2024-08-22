// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHSUPPORTEDDEVICEPROPERTIESRESULTOBJECT_H
#define CRKFETCHSUPPORTEDDEVICEPROPERTIESRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *liveProperties; // ivar: _liveProperties
@property (retain, nonatomic) NSArray *staticProperties; // ivar: _staticProperties


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif