// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHDEVICEGESTALTRESULTOBJECT_H
#define CRKFETCHDEVICEGESTALTRESULTOBJECT_H

@class CATTaskResultObject;


#import "CRKDeviceGestalt.h"

@interface CRKFetchDeviceGestaltResultObject : CATTaskResultObject

@property (retain, nonatomic) CRKDeviceGestalt *deviceGestalt; // ivar: _deviceGestalt


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif