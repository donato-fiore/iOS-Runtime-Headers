// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDMANAGER_H
#define FCFEEDMANAGER_H

@class NSMapTable, NFMutexLock;
@protocol FCFeedPersonalizing, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "FCCloudContext.h"

@interface FCFeedManager : NSObject

@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (retain, nonatomic) NSMapTable *feedDescriptorsByID; // ivar: _feedDescriptorsByID
@property (retain, nonatomic) NFMutexLock *feedDescriptorsLock; // ivar: _feedDescriptorsLock
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer; // ivar: _feedPersonalizer
@property (retain, nonatomic) NSObject<OS_dispatch_group> *forYouPrefetchGroup; // ivar: _forYouPrefetchGroup


+(id)_identifierForFeedName:(id)arg0 ;
-(id)_feedDescriptorWithIdentifier:(id)arg0 forceRecreate:(BOOL)arg1 tag:(id)arg2 ;
-(id)feedDescriptorForReadingHistory;
-(id)feedDescriptorForReadingList;
-(id)feedDescriptorForTag:(id)arg0 ;
-(id)feedDescriptorWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCloudContext:(id)arg0 ;


@end


#endif