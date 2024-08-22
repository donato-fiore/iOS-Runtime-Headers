// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCREMOTESUGGESTIONCONTENTPROVIDER_H
#define NCREMOTESUGGESTIONCONTENTPROVIDER_H

@class NSUUID;


#import "NCNotificationManagementSuggestionContentProvider.h"

@interface NCRemoteSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider

@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 uuid:(id)arg4 ;


@end


#endif