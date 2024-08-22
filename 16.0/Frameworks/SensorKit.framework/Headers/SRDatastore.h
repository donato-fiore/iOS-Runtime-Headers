// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRDATASTORE_H
#define SRDATASTORE_H


#import <Foundation/Foundation.h>

#import "SRDefaults.h"
#import "SRFrameStore.h"

@interface SRDatastore : NSObject {
    NSUInteger _permission;
    NSUInteger _maxAllowedPages;
    float _segmentResizeFactor;
    SRDefaults *_defaults;
    SRFrameStore *_framesStore;
    SRFrameStore *_metadata;
    SRFrameStore *_configuration;
}




+(void)initialize;
-(void)dealloc;


@end


#endif