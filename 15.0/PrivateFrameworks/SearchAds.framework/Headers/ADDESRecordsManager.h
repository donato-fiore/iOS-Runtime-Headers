// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADDESRECORDSMANAGER_H
#define ADDESRECORDSMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ADDESRecordsManager : NSObject

@property (retain, nonatomic) NSString *searchRequestID; // ivar: _searchRequestID


-(id)_createRecordForAdData:(id)arg0 index:(NSUInteger)arg1 responseType:(id)arg2 ;
-(id)eventTypeToString:(NSInteger)arg0 ;
-(id)init;
-(void)addOriginalAdRecordsToDES:(id)arg0 responseTypeString:(id)arg1 organics:(id)arg2 ;
-(void)addRerankedAdRecordsToDES:(id)arg0 ;
-(void)updateDESRecord:(id)arg0 forEvent:(NSInteger)arg1 ;


@end


#endif