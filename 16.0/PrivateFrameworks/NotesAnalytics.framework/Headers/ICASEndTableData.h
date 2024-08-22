// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASENDTABLEDATA_H
#define ICASENDTABLEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASEndTableData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *endingColumnCount; // ivar: _endingColumnCount
@property (readonly, nonatomic) NSNumber *endingRowCount; // ivar: _endingRowCount


+(id)dataName;
-(id)initWithEndingRowCount:(id)arg0 endingColumnCount:(id)arg1 ;
-(id)toDict;


@end


#endif