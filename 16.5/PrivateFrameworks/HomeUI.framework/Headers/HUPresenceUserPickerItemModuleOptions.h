// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPRESENCEUSERPICKERITEMMODULEOPTIONS_H
#define HUPRESENCEUSERPICKERITEMMODULEOPTIONS_H


#import <Foundation/Foundation.h>

#import "HUPresenceCurrentUserLocationDevice.h"

@interface HUPresenceUserPickerItemModuleOptions : NSObject

@property (readonly, nonatomic) BOOL customLocationSelected; // ivar: _customLocationSelected
@property (readonly, nonatomic) HUPresenceCurrentUserLocationDevice *locationDevice; // ivar: _locationDevice


-(id)initWithLocationDevice:(id)arg0 customLocationSelected:(BOOL)arg1 ;


@end


#endif