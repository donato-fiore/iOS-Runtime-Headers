// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCICONTEXT_H
#define VNCICONTEXT_H

@class CIContext;

#import <Foundation/Foundation.h>

#import "VNCIContextsHandler.h"

@interface VNCIContext : NSObject {
    CIContext *_ciContext;
    VNCIContextsHandler *_handler;
}






@end


#endif