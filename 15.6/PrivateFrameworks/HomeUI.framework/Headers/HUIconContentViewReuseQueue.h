// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUICONCONTENTVIEWREUSEQUEUE_H
#define HUICONCONTENTVIEWREUSEQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HUIconContentViewReuseQueue : NSObject

@property (readonly, nonatomic) Class contentViewClass; // ivar: _contentViewClass
@property (readonly, nonatomic) NSMutableArray *reuseStack; // ivar: _reuseStack


+(id)globalReuseQueueForContentViewClass:(Class)arg0 ;
-(id)dequeueContentView;
-(id)init;
-(id)initWithContentViewClass:(Class)arg0 ;
-(void)reapContentView:(id)arg0 ;


@end


#endif