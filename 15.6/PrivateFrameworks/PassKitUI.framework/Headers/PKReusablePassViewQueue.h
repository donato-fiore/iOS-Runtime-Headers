// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKREUSABLEPASSVIEWQUEUE_H
#define PKREUSABLEPASSVIEWQUEUE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PKReusablePassViewQueue : NSObject {
    NSMutableSet *_passViews;
}




-(id)dequeueReusablePassView;
-(id)initWithCount:(NSUInteger)arg0 ;
-(void)enqueueReusablePassView:(id)arg0 ;


@end


#endif