// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISKVOPROXY_H
#define ISKVOPROXY_H

@class NSArray, NSString;
@protocol ISKVOProxyDelegate;

#import <Foundation/Foundation.h>


@interface ISKVOProxy : NSObject {
    id *_target;
    NSArray *_keyPaths;
    NSString *_identifier;
}


@property (weak, nonatomic) NSObject<ISKVOProxyDelegate> *delegate; // ivar: _delegate


-(id)initWithTarget:(id)arg0 keyPaths:(id)arg1 identifier:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObservingTarget;
-(void)stopObservingTarget;


@end


#endif