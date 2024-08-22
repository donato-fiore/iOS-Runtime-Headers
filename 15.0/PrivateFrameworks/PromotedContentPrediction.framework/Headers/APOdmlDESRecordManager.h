// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLDESRECORDMANAGER_H
#define APODMLDESRECORDMANAGER_H

@class NSMutableDictionary;


#import "APOdmlSingleton.h"

@interface APOdmlDESRecordManager : APOdmlSingleton

@property (retain, nonatomic) NSMutableDictionary *desRecords; // ivar: _desRecords


+(id)sharedInstance;
-(id)init;
-(id)recordForRequestID:(id)arg0 ;
-(void)addAdListToDES:(id)arg0 forRequestID:(id)arg1 organics:(id)arg2 ;
-(void)updateAdData:(id)arg0 event:(NSInteger)arg1 forRequestID:(id)arg2 ;
-(void)updateRerankedAdList:(id)arg0 forRequestID:(id)arg1 ;


@end


#endif