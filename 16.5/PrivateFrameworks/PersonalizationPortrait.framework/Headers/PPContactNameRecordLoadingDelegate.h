// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTNAMERECORDLOADINGDELEGATE_H
#define PPCONTACTNAMERECORDLOADINGDELEGATE_H



#import "PPRecordLoadingDelegate.h"

@interface PPContactNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id *contactNameRecordsCompletion; // ivar: _contactNameRecordsCompletion
@property (copy, nonatomic) id *contactNameRecordsHandler; // ivar: _contactNameRecordsHandler
@property (copy, nonatomic) id *contactNameRecordsSetup; // ivar: _contactNameRecordsSetup
@property (copy, nonatomic) id *recentContactNameRecordsCompletion; // ivar: _recentContactNameRecordsCompletion
@property (copy, nonatomic) id *recentContactNameRecordsHandler; // ivar: _recentContactNameRecordsHandler
@property (copy, nonatomic) id *recentContactNameRecordsSetup; // ivar: _recentContactNameRecordsSetup
@property (copy, nonatomic) id *resetContactNameRecordData; // ivar: _resetContactNameRecordData


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