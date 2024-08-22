// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXWIDGETMETADATADATASOURCE_H
#define ATXWIDGETMETADATADATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXWidgetMetadataDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)initWithDevice:(id)arg0 ;
-(void)fetchWidgetMetadataForAppBundleIds:(id)arg0 callback:(id)arg1 ;


@end


#endif