// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCOREANALYTICSFIELDDATA_H
#define HMCOREANALYTICSFIELDDATA_H

@class HMFObject, NSString;

#import <Foundation/Foundation.h>


@interface HMCoreAnalyticsFieldData : HMFObject

@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSObject *value; // ivar: _value


-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif