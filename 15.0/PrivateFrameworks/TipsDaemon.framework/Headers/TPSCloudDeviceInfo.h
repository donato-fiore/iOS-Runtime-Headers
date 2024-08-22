// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCLOUDDEVICEINFO_H
#define TPSCLOUDDEVICEINFO_H

@class TPSSerializableObject, NSString;



@interface TPSCloudDeviceInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *maxOSVersion; // ivar: _maxOSVersion
@property (copy, nonatomic) NSString *minOSVersion; // ivar: _minOSVersion
@property (copy, nonatomic) NSString *model; // ivar: _model


-(id)debugDescription;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif