// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFLOADINGCONTEXTEVENTRESULT_H
#define _MFLOADINGCONTEXTEVENTRESULT_H

@class NSURL, NSArray;
@protocol EFInvocable;

#import <Foundation/Foundation.h>


@interface _MFLoadingContextEventResult : NSObject {
    NSURL *_contentURL;
    NSArray *_relatedContentItems;
    id<EFInvocable> *_cleanupInvocable;
    NSURL *_publicMessageURL;
}






@end


#endif