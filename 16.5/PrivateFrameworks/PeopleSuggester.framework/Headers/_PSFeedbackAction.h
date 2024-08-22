// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSFEEDBACKACTION_H
#define _PSFEEDBACKACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_PSSuggestion.h"

@interface _PSFeedbackAction : NSObject

@property (readonly, nonatomic) _PSSuggestion *suggestion; // ivar: _suggestion
@property (readonly, copy, nonatomic) NSString *transportBundleID; // ivar: _transportBundleID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)abandonment;
+(id)engagementWithNonSuggestionWithEngagementIdentifier:(id)arg0 ;
+(id)engagementWithSuggestion:(id)arg0 transportBundleID:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 suggestion:(id)arg1 transportBundleID:(id)arg2 ;


@end


#endif