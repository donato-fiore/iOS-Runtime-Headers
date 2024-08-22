// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMAPPUBLISHER_H
#define AVMAPPUBLISHER_H



#import "AVPublisher.h"

@interface AVMapPublisher : AVPublisher {
    AVPublisher *_upstream;
    id *_transform;
}




+(id)mapPublisherWithUpstream:(id)arg0 transform:(id)arg1 ;
-(id)description;
-(id)initWithUpstream:(id)arg0 transform:(id)arg1 ;
-(id)subscribeRequestingInitialValue:(BOOL)arg0 block:(id)arg1 ;
-(void)dealloc;


@end


#endif