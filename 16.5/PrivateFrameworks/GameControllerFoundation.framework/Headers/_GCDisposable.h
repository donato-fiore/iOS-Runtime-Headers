// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDISPOSABLE_H
#define _GCDISPOSABLE_H


#import <Foundation/Foundation.h>


@interface _GCDisposable : NSObject {
    id *_handler;
}




-(id)initWithCleanupHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif