// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLDESRECORDMANAGER_H
#define APODMLDESRECORDMANAGER_H

@class NSMutableDictionary;


#import "APOdmlSingleton.h"

@interface APOdmlDESRecordManager : APOdmlSingleton

@property (retain, nonatomic) NSMutableDictionary *desRecords; // ivar: _desRecords


+(id)sharedInstance;
-(id)init;
-(id)recordForID:(id)arg0 placementType:(NSUInteger)arg1 ;
-(void)addAdListToDES:(id)arg0 forRecordID:(id)arg1 placementType:(NSUInteger)arg2 ;
-(void)updateAdData:(id)arg0 event:(NSInteger)arg1 forRecordID:(id)arg2 ;


@end


#endif