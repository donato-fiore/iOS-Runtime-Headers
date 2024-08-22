// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLJSVALUEPROXY_H
#define TMLJSVALUEPROXY_H

@class NSString;
@protocol TMLJSValueProxy;

#import <Foundation/Foundation.h>


@interface TMLJSValueProxy : NSObject <TMLJSValueProxy>

 {
    id *_target;
    NSString *_keyPath;
}


@property (retain, nonatomic) id *_;


-(id)initWithTarget:(id)arg0 keyPath:(id)arg1 ;


@end


#endif