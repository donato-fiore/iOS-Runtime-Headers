// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSUIDATELABELFACTORY_H
#define BSUIDATELABELFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BSUIDateLabelFactory : NSObject {
    NSMutableDictionary *_recycledLabelsByStyle;
}




+(id)sharedInstance;
-(NSInteger)styleForLabel:(id)arg0 ;
-(id)combinedDateLabelWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 allDay:(BOOL)arg3 forStyle:(NSInteger)arg4 ;
-(id)endLabelWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 allDay:(BOOL)arg3 forStyle:(NSInteger)arg4 ;
-(id)init;
-(id)startLabelWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 allDay:(BOOL)arg3 forStyle:(NSInteger)arg4 ;
-(void)_purgeRecycledLabels;
-(void)dealloc;
-(void)recycleLabel:(id)arg0 ;


@end


#endif