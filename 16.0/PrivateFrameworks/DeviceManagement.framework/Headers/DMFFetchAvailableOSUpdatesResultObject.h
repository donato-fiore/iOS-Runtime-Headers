// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHAVAILABLEOSUPDATESRESULTOBJECT_H
#define DMFFETCHAVAILABLEOSUPDATESRESULTOBJECT_H

@class CATTaskResultObject;


#import "DMFOSUpdate.h"

@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) DMFOSUpdate *update; // ivar: _update


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpdate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif