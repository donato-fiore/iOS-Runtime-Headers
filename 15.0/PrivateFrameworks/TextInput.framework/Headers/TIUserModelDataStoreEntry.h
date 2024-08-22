// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIUSERMODELDATASTOREENTRY_H
#define TIUSERMODELDATASTOREENTRY_H

@class NSString, NSData, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface TIUserModelDataStoreEntry : NSObject

@property (retain) NSString *inputMode; // ivar: _inputMode
@property (retain) NSString *key; // ivar: _key
@property (retain) NSData *properties; // ivar: _properties
@property (retain) NSNumber *realValue; // ivar: _realValue
@property (retain) NSNumber *secondaryValue; // ivar: _secondaryValue
@property (retain) NSDate *timestamp; // ivar: _timestamp
@property (retain) NSNumber *value; // ivar: _value


-(id)initWithTimestamp:(id)arg0 withKey:(id)arg1 withInputMode:(id)arg2 withValue:(id)arg3 withSecondaryValue:(id)arg4 withRealValue:(id)arg5 withProperties:(id)arg6 ;


@end


#endif