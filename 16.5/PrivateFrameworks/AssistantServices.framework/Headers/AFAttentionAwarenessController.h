// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFATTENTIONAWARENESSCONTROLLER_H
#define AFATTENTIONAWARENESSCONTROLLER_H

@class AWAttentionAwarenessClient, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFAttentionAwarenessController : NSObject {
    AWAttentionAwarenessClient *_attentionClient;
    NSObject<OS_dispatch_queue> *_attentionQueue;
}


@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 ;
-(void)requestAttentionStateWithCompletion:(id)arg0 ;


@end


#endif