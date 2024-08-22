// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IAMIMPRESSION_H
#define IAMIMPRESSION_H

@class NSDate, ICInAppMessageEntry, NSString;

#import <Foundation/Foundation.h>


@interface IAMImpression : NSObject

@property (copy, nonatomic) NSDate *displayEndTime; // ivar: _displayEndTime
@property (copy, nonatomic) NSDate *displayStartTime; // ivar: _displayStartTime
@property (copy, nonatomic) ICInAppMessageEntry *messageEntry; // ivar: _messageEntry
@property (readonly, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) int messageType;
@property (copy, nonatomic) NSString *targetIdentifier; // ivar: _targetIdentifier


-(id)initWithMessageEntry:(id)arg0 targetIdentifier:(id)arg1 ;
-(id)reportableMetricsEventDictionary;


@end


#endif