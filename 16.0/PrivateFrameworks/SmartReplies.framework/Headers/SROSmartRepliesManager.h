// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SROSMARTREPLIESMANAGER_H
#define SROSMARTREPLIESMANAGER_H


#import <Foundation/Foundation.h>

#import "_TtC12SmartReplies21SRSmartRepliesManager.h"

@interface SROSmartRepliesManager : NSObject {
    _TtC12SmartReplies21SRSmartRepliesManager *_backingManager;
}




+(id)sharedManager;
-(id)init;
-(id)suggestionsForRequest:(id)arg0 ;


@end


#endif