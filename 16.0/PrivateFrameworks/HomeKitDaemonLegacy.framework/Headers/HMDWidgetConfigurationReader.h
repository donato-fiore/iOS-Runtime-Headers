// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDWIDGETCONFIGURATIONREADER_H
#define HMDWIDGETCONFIGURATIONREADER_H

@protocol HMDWidgetConfigurationReaderInterface;

#import <Foundation/Foundation.h>


@interface HMDWidgetConfigurationReader : NSObject

@property (readonly) NSObject<HMDWidgetConfigurationReaderInterface> *interface; // ivar: _interface


-(NSInteger)homeWidgetsEnabledCount;
-(id)fetchedHomeWidgets;
-(id)init;
-(id)initWithInterface:(id)arg0 ;


@end


#endif