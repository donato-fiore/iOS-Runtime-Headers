// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMCOREANALYTICSEVENT_H
#define EMCOREANALYTICSEVENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface EMCoreAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithEventName:(id)arg0 collectionData:(id)arg1 ;


@end


#endif