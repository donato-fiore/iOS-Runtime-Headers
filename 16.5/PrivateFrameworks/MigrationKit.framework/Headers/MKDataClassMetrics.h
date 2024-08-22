// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKDATACLASSMETRICS_H
#define MKDATACLASSMETRICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKDataClassMetrics : NSObject

@property (nonatomic) CGFloat exportTime; // ivar: _exportTime
@property (nonatomic) int itemCount; // ivar: _itemCount
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat networkQueueTime; // ivar: _networkQueueTime
@property (nonatomic) CGFloat preparationTime; // ivar: _preparationTime
@property (nonatomic) NSUInteger size; // ivar: _size
@property (nonatomic) CGFloat transferSpeed; // ivar: _transferSpeed
@property (nonatomic) CGFloat transferTime; // ivar: _transferTime


-(id)initWithDictionary:(id)arg0 ;


@end


#endif