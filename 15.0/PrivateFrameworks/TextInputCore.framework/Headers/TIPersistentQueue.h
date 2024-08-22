// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIPERSISTENTQUEUE_H
#define TIPERSISTENTQUEUE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface TIPersistentQueue : NSObject {
    NSURL *_presentedItemURL;
}




-(id)initWithURL:(id)arg0 ;
-(void)dequeueObjects:(id)arg0 ;
-(void)enqueueObjects:(id)arg0 ;
-(void)readObjects:(id)arg0 ;


@end


#endif