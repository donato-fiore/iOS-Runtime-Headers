// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDMEDICALRECORDDISPLAYITEMGROUP_H
#define WDMEDICALRECORDDISPLAYITEMGROUP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "WDMedicalRecordDaySummary.h"

@interface WDMedicalRecordDisplayItemGroup : NSObject

@property (retain, nonatomic) WDMedicalRecordDaySummary *daySummary; // ivar: _daySummary
@property (readonly, copy, nonatomic) NSArray *displayItems;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)displayItemGroupWithDaySummary:(id)arg0 ;
+(id)displayItemGroupWithDisplayItems:(id)arg0 ;
-(NSInteger)numberOfDisplayItems;
-(id)displayItemAtIndex:(NSInteger)arg0 ;


@end


#endif