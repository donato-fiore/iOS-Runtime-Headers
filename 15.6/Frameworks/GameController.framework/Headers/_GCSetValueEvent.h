// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCSETVALUEEVENT_H
#define _GCSETVALUEEVENT_H


#import <Foundation/Foundation.h>


@interface _GCSetValueEvent : NSObject {
    CGFloat timestamp;
    BOOL pressed;
    BOOL consumed;
    BOOL tentativeSinglePress;
    BOOL ignoredByLongPressRecognizer;
    BOOL ignoredByDoublePressRecognizer;
    BOOL ignoredBySinglePressRecognizer;
}






@end


#endif