// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARSESSIONFRAMEOBSERVER_H
#define ARSESSIONFRAMEOBSERVER_H

@class NSString;
@protocol ARInternalSessionObserver;

#import <Foundation/Foundation.h>


@interface ARSessionFrameObserver : NSObject <ARInternalSessionObserver>

 {
    function<void (rf::data_flow::provider::InputFrame &&)> _callback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCallback:(struct function<void (rf::data_flow::provider::InputFrame &&)> )arg0 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)setCallback:(struct function<void (rf::data_flow::provider::InputFrame &&)> )arg0 ;


@end


#endif