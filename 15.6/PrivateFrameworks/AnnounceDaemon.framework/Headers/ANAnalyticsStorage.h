// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANANALYTICSSTORAGE_H
#define ANANALYTICSSTORAGE_H

@class ANDefaults, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface ANAnalyticsStorage : NSObject

@property (retain, nonatomic) ANDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) NSMutableDictionary *eventPayloads; // ivar: _eventPayloads
@property (readonly) NSDictionary *eventsToReport;


-(id)init;
-(id)initWithDefaults:(id)arg0 ;
-(void)_synchronizedSave;
-(void)erase;
-(void)save:(id)arg0 counter:(id)arg1 ;
-(void)save:(id)arg0 payload:(id)arg1 ;


@end


#endif