// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFLOADINGCONTEXTEVENTRESULT_H
#define _MFLOADINGCONTEXTEVENTRESULT_H

@class NSURL, NSArray;
@protocol EFInvocable;

#import <Foundation/Foundation.h>


@interface _MFLoadingContextEventResult : NSObject

@property (retain, nonatomic) NSObject<EFInvocable> *cleanupInvocable; // ivar: _cleanupInvocable
@property (retain, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (retain, nonatomic) NSURL *publicMessageURL; // ivar: _publicMessageURL
@property (retain, nonatomic) NSArray *relatedContentItems; // ivar: _relatedContentItems




@end


#endif