// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMSSAMPLE_H
#define RMSSAMPLE_H


#import <Foundation/Foundation.h>


@interface RMSSample : NSObject

@property (nonatomic) CGFloat RMSScore; // ivar: _RMSScore
@property (nonatomic) NSUInteger lastSampleCount; // ivar: _lastSampleCount


-(NSInteger)compareScoresDesc:(id)arg0 ;
-(id)initWithRMSScore:(CGFloat)arg0 lastSampleCount:(NSUInteger)arg1 ;


@end


#endif