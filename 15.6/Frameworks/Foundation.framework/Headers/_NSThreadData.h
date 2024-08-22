// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSTHREADDATA_H
#define _NSTHREADDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _NSThreadData : NSObject {
    id *_target;
    SEL _selector;
    id *_argument;
    id *dict;
    id *name;
    int seqNum;
    unsigned char qstate;
    char qos;
    unsigned char cancel;
    uint8_t status;
    id *performQ;
    NSMutableDictionary *performD;
    _opaque_pthread_attr_t attr;
    *_opaque_pthread_t tid;
    CGFloat pri;
    CGFloat defpri;
}




-(id)init;


@end


#endif