// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARPHONETICMATCHDATA_H
#define _EARPHONETICMATCHDATA_H


#import <Foundation/Foundation.h>


@interface _EARPhoneticMatchData : NSObject

@property (readonly, nonatomic) shared_ptr<quasar::DataFeed> dataFeed; // ivar: _dataFeed


-(BOOL)appendData:(id)arg0 prior:(float)arg1 ;
-(BOOL)roomForMoreData;
-(id)initWithFeedType:(NSInteger)arg0 jsonConfigFile:(id)arg1 ;
-(int)convertFeedType:(NSInteger)arg0 ;
-(int)getLimit;
-(void)addOsym;
-(void)applyRegexEnumerations;
-(void)expDecayPriors;
-(void)normalizePriors;
-(void)powerScalePriors;
-(void)sortItemsByPriorAsc;
-(void)sortItemsByPriorDesc;
-(void)writeTsv:(id)arg0 ;


@end


#endif