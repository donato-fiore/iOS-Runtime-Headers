// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSFAMILYDEVICE_H
#define IDSFAMILYDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IDSFamilyDevice : NSObject

@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSString *deviceColor; // ivar: _deviceColor
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSString *deviceUniqueID; // ivar: _deviceUniqueID
@property (retain, nonatomic) NSString *ownerHandle; // ivar: _ownerHandle


-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithOwnerHandle:(id)arg0 deviceName:(id)arg1 deviceType:(NSInteger)arg2 deviceColor:(id)arg3 buildVersion:(id)arg4 deviceUniqueID:(id)arg5 ;


@end


#endif