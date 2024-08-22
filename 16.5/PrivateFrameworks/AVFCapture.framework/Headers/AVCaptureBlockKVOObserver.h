// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREBLOCKKVOOBSERVER_H
#define AVCAPTUREBLOCKKVOOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVCaptureBlockKVOObserver : NSObject {
    NSObject *_object;
    NSString *_keyPath;
    id *_handler;
}




-(id)initWithObjectToObserve:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif