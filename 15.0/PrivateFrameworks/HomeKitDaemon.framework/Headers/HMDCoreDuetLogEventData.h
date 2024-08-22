// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOREDUETLOGEVENTDATA_H
#define HMDCOREDUETLOGEVENTDATA_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HMDCoreDuetLogEventData : NSObject

@property (readonly, copy) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy) NSString *value; // ivar: _value


-(id)initWithMetadata:(id)arg0 value:(id)arg1 ;


@end


#endif