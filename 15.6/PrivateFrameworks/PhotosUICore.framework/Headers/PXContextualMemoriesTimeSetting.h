// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTEXTUALMEMORIESTIMESETTING_H
#define PXCONTEXTUALMEMORIESTIMESETTING_H

@class NSDate, NSDateFormatter, NSString;
@protocol PXContextualMemoriesSetting;

#import <Foundation/Foundation.h>


@interface PXContextualMemoriesTimeSetting : NSObject <PXContextualMemoriesSetting>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


-(id)_forceMiddayDateForDate:(id)arg0 ;
-(id)init;
-(void)resetToDefault;


@end


#endif