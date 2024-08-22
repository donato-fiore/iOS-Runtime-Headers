// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRERESULT_H
#define MRERESULT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MREResult : NSObject

@property (readonly, retain, nonatomic) NSNumber *freqSkew; // ivar: _freqSkew
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, retain, nonatomic) NSNumber *score; // ivar: _score
@property (readonly, retain, nonatomic) NSNumber *timeSkew; // ivar: _timeSkew
@property (readonly, nonatomic) NSUInteger trackID; // ivar: _trackID


-(id)initWithTrackId:(NSUInteger)arg0 offset:(CGFloat)arg1 timeSkew:(id)arg2 freqSkew:(id)arg3 score:(id)arg4 ;
-(void)dealloc;


@end


#endif