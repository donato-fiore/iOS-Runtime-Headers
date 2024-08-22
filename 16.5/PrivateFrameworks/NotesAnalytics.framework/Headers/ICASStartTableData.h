// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSTARTTABLEDATA_H
#define ICASSTARTTABLEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASStartTableData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *startingColumnCount; // ivar: _startingColumnCount
@property (readonly, nonatomic) NSNumber *startingRowCount; // ivar: _startingRowCount


+(id)dataName;
-(id)initWithStartingRowCount:(id)arg0 startingColumnCount:(id)arg1 ;
-(id)toDict;


@end


#endif