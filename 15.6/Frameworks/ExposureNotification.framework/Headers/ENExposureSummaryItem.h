// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENEXPOSURESUMMARYITEM_H
#define ENEXPOSURESUMMARYITEM_H

@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface ENExposureSummaryItem : NSObject <CUXPCCodable>



@property (nonatomic) CGFloat maximumScore; // ivar: _maximumScore
@property (nonatomic) CGFloat scoreSum; // ivar: _scoreSum
@property (nonatomic) CGFloat weightedDurationSum; // ivar: _weightedDurationSum


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)roundDurations;


@end


#endif