// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXEXTENSIONMATCHINGMERGER_H
#define _MXEXTENSIONMATCHINGMERGER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MXExtensionMatchingMerger : NSObject {
    NSObject<OS_dispatch_queue> *_lock;
    NSArray *_mapExtensions;
    NSArray *_intentNonUIExtensions;
    NSArray *_intentUIExtensions;
}




-(id)init;
-(id)receiveExtensions:(id)arg0 withIndex:(NSUInteger)arg1 ;
-(void)clearExtensions;


@end


#endif