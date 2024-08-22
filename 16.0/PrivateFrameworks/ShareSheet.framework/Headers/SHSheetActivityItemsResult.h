// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETACTIVITYITEMSRESULT_H
#define SHSHEETACTIVITYITEMSRESULT_H

@class NSArray, NSString, NSData;

#import <Foundation/Foundation.h>

#import "UIActivity.h"
#import "UISUISecurityContext.h"

@interface SHSheetActivityItemsResult : NSObject

@property (readonly, nonatomic) UIActivity *activity; // ivar: _activity
@property (copy, nonatomic) NSArray *activityItemURLValues; // ivar: _activityItemURLValues
@property (readonly, copy, nonatomic) NSArray *activityItemValues; // ivar: _activityItemValues
@property (copy, nonatomic) NSString *initialSocialText; // ivar: _initialSocialText
@property (readonly, nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (retain, nonatomic) UISUISecurityContext *securityScopedURLs; // ivar: _securityScopedURLs
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (copy, nonatomic) NSData *suggestedImageData; // ivar: _suggestedImageData


-(id)initWithActivity:(id)arg0 activityItemValues:(id)arg1 ;


@end


#endif