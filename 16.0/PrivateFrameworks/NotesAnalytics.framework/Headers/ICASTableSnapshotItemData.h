// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASTABLESNAPSHOTITEMDATA_H
#define ICASTABLESNAPSHOTITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASTableSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *tableColumnCount; // ivar: _tableColumnCount
@property (readonly, nonatomic) NSNumber *tableRowCount; // ivar: _tableRowCount


+(id)dataName;
-(id)initWithTableRowCount:(id)arg0 tableColumnCount:(id)arg1 ;
-(id)toDict;


@end


#endif