// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCAVASSETKEYFETCHREQUEST_H
#define FCAVASSETKEYFETCHREQUEST_H

@class AVContentKeySession, NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface FCAVAssetKeyFetchRequest : NSObject {
    BOOL _forceRefresh;
    AVContentKeySession *_contentKeySession;
    NSMutableSet *_remainingKeyURIs;
    NSMutableArray *_errorsEncountered;
    id *_completionHandler;
}






@end


#endif