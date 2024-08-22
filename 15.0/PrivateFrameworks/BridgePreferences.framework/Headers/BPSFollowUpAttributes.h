// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSFOLLOWUPATTRIBUTES_H
#define BPSFOLLOWUPATTRIBUTES_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface BPSFollowUpAttributes : NSObject

@property (retain, nonatomic) NSDictionary *followUpActions; // ivar: _followUpActions
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedNotificationDescription; // ivar: _localizedNotificationDescription
@property (copy, nonatomic) NSString *localizedNotificationTitle; // ivar: _localizedNotificationTitle
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) BOOL wantNotification; // ivar: _wantNotification


+(id)attributeWithOptions:(id)arg0 ;


@end


#endif