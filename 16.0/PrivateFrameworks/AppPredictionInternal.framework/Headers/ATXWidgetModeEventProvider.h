// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXWIDGETMODEEVENTPROVIDER_H
#define ATXWIDGETMODEEVENTPROVIDER_H

@class ATXInformationStore;

#import <Foundation/Foundation.h>


@interface ATXWidgetModeEventProvider : NSObject {
    ATXInformationStore *_informationStore;
}




-(id)initWithInformationStore:(id)arg0 ;
-(id)widgetEngagementCountSinceStartDate:(id)arg0 ;
-(id)widgetModeEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;


@end


#endif