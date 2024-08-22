// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELINCOMPLETEINFERENCEEVENT_H
#define ATXANCHORMODELINCOMPLETEINFERENCEEVENT_H

@class NSString, NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXAnchor.h"
#import "ATXDuetEvent.h"

@interface ATXAnchorModelIncompleteInferenceEvent : NSObject <NSSecureCoding>

 {
    NSString *_anchorClassString;
}


@property (readonly, nonatomic) ATXAnchor *anchor;
@property (readonly, nonatomic) ATXDuetEvent *anchorEvent; // ivar: _anchorEvent
@property (readonly, nonatomic) NSDate *dateFirstAdded; // ivar: _dateFirstAdded
@property (retain, nonatomic) NSNumber *retryCount; // ivar: _retryCount


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAnchor:(id)arg0 anchorEvent:(id)arg1 ;
-(id)initWithAnchorClassString:(id)arg0 anchorEvent:(id)arg1 dateFirstAdded:(id)arg2 retryCount:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif