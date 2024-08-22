// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STLAUNCHDATES_H
#define STLAUNCHDATES_H

@class NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface STLaunchDates : NSObject

@property (retain) NSDate *latestDate; // ivar: _latestDate
@property (retain) NSDictionary *launchDatesByApp; // ivar: _launchDatesByApp


+(id)sharedDates;
-(id)init;
-(id)launchDateForApp:(id)arg0 ;
-(void)_updateDates:(id)arg0 ;
-(void)_writeDatesPref:(id)arg0 ;
-(void)addBiomeDates;
-(void)addSpotlightDates;
-(void)load;
-(void)readDatesPref;
-(void)refreshDates;
-(void)updateDates:(id)arg0 ;
-(void)writeDatesPref;


@end


#endif