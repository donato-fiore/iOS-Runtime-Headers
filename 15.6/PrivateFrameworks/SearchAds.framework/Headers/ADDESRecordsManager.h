// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADDESRECORDSMANAGER_H
#define ADDESRECORDSMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ADDESRecordsManager : NSObject

@property (retain, nonatomic) NSString *recordID; // ivar: _recordID


-(BOOL)isAppInstalled:(NSUInteger)arg0 ;
-(id)_createRecordForAdData:(id)arg0 installed:(BOOL)arg1 isDupe:(BOOL)arg2 ;
-(id)eventTypeToString:(NSInteger)arg0 ;
-(id)init;
-(void)createRecords:(id)arg0 placementType:(NSUInteger)arg1 firstOrganicId:(id)arg2 ;
-(void)updateDESRecord:(id)arg0 forEvent:(NSInteger)arg1 ;


@end


#endif