// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIREPORTSENSORMANAGER_H
#define PUIREPORTSENSORMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PUIReportSensorManager : NSObject

@property (retain, nonatomic) NSArray *allEvents; // ivar: _allEvents


+(id)_iconFromImage:(id)arg0 ;
+(id)iconForCategory:(id)arg0 ;
+(id)localizedStringForCategory:(id)arg0 ;
-(BOOL)shouldIncludeBundleID:(id)arg0 ;
-(id)bundleIDsAndLatestDatesFromEvents:(id)arg0 ;
-(id)categoriesAndLatestDatesFromEvents:(id)arg0 ;
-(id)events:(id)arg0 filtered:(id)arg1 ;
-(id)eventsFiltered:(id)arg0 ;
-(id)loadAllEvents;
-(void)dataDidChange;
-(void)reloadDataWithCompletion:(id)arg0 ;


@end


#endif