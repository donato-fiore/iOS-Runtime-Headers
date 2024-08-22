// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9TIPSCORE214DONATIONRECORD_H
#define _TTC9TIPSCORE214DONATIONRECORD_H

@class NSManagedObject, NSDate, NSDictionary;


#import "_TtC9TipsCore211EventRecord.h"

@interface _TtC9TipsCore214DonationRecord : NSManagedObject {
    ? _options;
}


@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDictionary *donationInfo;
@property (nonatomic, retain) _TtC9TipsCore211EventRecord *event;
@property (nonatomic) NSInteger optionsValue;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif