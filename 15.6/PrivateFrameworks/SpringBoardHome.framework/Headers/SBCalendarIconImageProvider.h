// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBCALENDARICONIMAGEPROVIDER_H
#define SBCALENDARICONIMAGEPROVIDER_H

@class SBFDateTimeController, NSString;
@protocol SBDateTimeOverrideObserver, SBCalendarIconImageProviderDelegate;

#import <Foundation/Foundation.h>


@interface SBCalendarIconImageProvider : NSObject <SBDateTimeOverrideObserver>



@property (readonly, nonatomic) SBFDateTimeController *dateTimeController; // ivar: _dateTimeController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBCalendarIconImageProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)significantTimeChangeNotificationName;
+(void)setSignificantTimeChangeNotificationName:(id)arg0 ;
-(id)iconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)init;
-(id)initWithDateTimeController:(id)arg0 ;
-(id)preparedISIcon;
-(id)unmaskedIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(void)_startListeningForSignificantTimeChanges;
-(void)_stopListeningForSignificantTimeChanges;
-(void)controller:(id)arg0 didChangeOverrideDateFromDate:(id)arg1 ;
-(void)dealloc;
-(void)localeChanged;
-(void)reloadIconImage;


@end


#endif