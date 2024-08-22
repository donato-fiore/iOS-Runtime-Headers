// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAFARICLEARBROWSINGDATAINTERVAL_H
#define SAFARICLEARBROWSINGDATAINTERVAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SafariClearBrowsingDataInterval : NSObject

@property (retain, nonatomic) NSString *aggdIntervalKey; // ivar: _aggdIntervalKey
@property (nonatomic) NSInteger clearBrowsingDataInterval; // ivar: _clearBrowsingDataInterval
@property (copy, nonatomic) id *dateAfterWhichDataShouldBeClearedBlock; // ivar: _dateAfterWhichDataShouldBeClearedBlock
@property (readonly) NSString *descriptionOfInterval; // ivar: _descriptionOfInterval


-(id)description;
-(id)init;
-(id)initWithDescription:(id)arg0 dateAfterWhichDataShouldBeClearedBlock:(id)arg1 ;


@end


#endif