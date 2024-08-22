// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEAKLISTENER_H
#define WEAKLISTENER_H

@protocol SFFeedbackListener;

#import <Foundation/Foundation.h>


@interface WeakListener : NSObject {
    id<SFFeedbackListener> *_weakListener;
}


@property (readonly, nonatomic) NSObject<SFFeedbackListener> *strongListener;


-(id)initWithListener:(id)arg0 ;


@end


#endif