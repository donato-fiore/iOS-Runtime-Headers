// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXGROUPHISTOGRAM_H
#define ATXGROUPHISTOGRAM_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXGroupHistogram : NSObject {
    NSMutableDictionary *_histogram;
    BOOL _isTotalScoreValid;
    CGFloat _total;
    _opaque_pthread_mutex_t _lock;
}




-(CGFloat)_getTotalScore;
-(CGFloat)getScoreForGroup:(id)arg0 ;
-(id)init;
-(void)addScore:(CGFloat)arg0 group:(id)arg1 ;
-(void)dealloc;


@end


#endif