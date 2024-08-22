// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPANIONAPRICOTCOMPLICATIONRECORD_H
#define NTKCOMPANIONAPRICOTCOMPLICATIONRECORD_H

@class NSString, CLKComplicationDescriptor, NSArray, CLKWidgetComplicationDescriptor;

#import <Foundation/Foundation.h>


@interface NTKCompanionApricotComplicationRecord : NSObject

@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) CLKComplicationDescriptor *complicationDescriptor; // ivar: _complicationDescriptor
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSArray *supportedClockKitFamilies; // ivar: _supportedClockKitFamilies
@property (retain, nonatomic) CLKWidgetComplicationDescriptor *widgetDescriptor; // ivar: _widgetDescriptor




@end


#endif