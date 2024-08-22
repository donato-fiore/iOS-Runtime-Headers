// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRPROGRESSPROXY_H
#define BRPROGRESSPROXY_H

@class NSProgress, NSURL;
@protocol BRProgressProxyDelegate;



@interface BRProgressProxy : NSProgress {
    NSURL *_url;
    id *_globalProgressSubscriber;
}


@property (weak) NSObject<BRProgressProxyDelegate> *delegate; // ivar: _delegate


-(id)initWithURL:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;
-(void)stop;


@end


#endif