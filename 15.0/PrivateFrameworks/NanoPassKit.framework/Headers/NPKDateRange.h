// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKDATERANGE_H
#define NPKDATERANGE_H

@class NSString, NSDate;
@protocol NPKDateRange;

#import <Foundation/Foundation.h>


@interface NPKDateRange : NSObject <NPKDateRange>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, nonatomic) NSString *expiryDateString; // ivar: _expiryDateString
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *startDateString; // ivar: _startDateString
@property (readonly) Class superclass;


+(id)_dateStringWithDate:(id)arg0 style:(NSUInteger)arg1 ;
-(id)initWithStartDate:(id)arg0 expirationDate:(id)arg1 formatterStyle:(NSUInteger)arg2 ;


@end


#endif