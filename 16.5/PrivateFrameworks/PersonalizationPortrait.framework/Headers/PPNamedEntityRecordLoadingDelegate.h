// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPNAMEDENTITYRECORDLOADINGDELEGATE_H
#define PPNAMEDENTITYRECORDLOADINGDELEGATE_H



#import "PPRecordLoadingDelegate.h"

@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id *namedEntityRecordsCompletion; // ivar: _namedEntityRecordsCompletion
@property (copy, nonatomic) id *namedEntityRecordsHandler; // ivar: _namedEntityRecordsHandler
@property (copy, nonatomic) id *namedEntityRecordsSetup; // ivar: _namedEntityRecordsSetup
@property (copy, nonatomic) id *recentNamedEntityRecordsCompletion; // ivar: _recentNamedEntityRecordsCompletion
@property (copy, nonatomic) id *recentNamedEntityRecordsHandler; // ivar: _recentNamedEntityRecordsHandler
@property (copy, nonatomic) id *recentNamedEntityRecordsSetup; // ivar: _recentNamedEntityRecordsSetup
@property (copy, nonatomic) id *resetNamedEntityRecordData; // ivar: _resetNamedEntityRecordData


-(id)description;
-(id)initWithName:(id)arg0 ;
-(unsigned char)recentRecordLoadingHandler:(id)arg0 ;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg0 ;
-(unsigned char)recordLoadingSetup;
-(void)recentRecordLoadingCompletion;
-(void)recordLoadingCompletion;
-(void)resetRecordData;


@end


#endif