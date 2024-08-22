// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFANALYTICSEVENT_H
#define SFANALYTICSEVENT_H

@class NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface SFAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDictionary *record; // ivar: _record
@property (readonly, nonatomic) NSNumber *timestamp; // ivar: _timestamp


-(id)initFromRow:(id)arg0 ;


@end


#endif