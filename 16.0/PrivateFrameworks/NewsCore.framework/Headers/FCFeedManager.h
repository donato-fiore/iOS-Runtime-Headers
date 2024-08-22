// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDMANAGER_H
#define FCFEEDMANAGER_H

@protocol FCFeedPersonalizing;

#import <Foundation/Foundation.h>

#import "FCCloudContext.h"

@interface FCFeedManager : NSObject

@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer; // ivar: _feedPersonalizer


+(id)_identifierForFeedName:(id)arg0 ;
-(id)_feedDescriptorWithIdentifier:(id)arg0 tag:(id)arg1 feedConfiguration:(NSUInteger)arg2 ;
-(id)feedDescriptorForReadingHistory;
-(id)feedDescriptorForReadingList;
-(id)feedDescriptorForTag:(id)arg0 feedConfiguration:(NSUInteger)arg1 ;
-(id)feedDescriptorWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCloudContext:(id)arg0 ;


@end


#endif