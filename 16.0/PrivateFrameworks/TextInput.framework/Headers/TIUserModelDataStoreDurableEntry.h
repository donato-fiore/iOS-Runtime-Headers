// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIUSERMODELDATASTOREDURABLEENTRY_H
#define TIUSERMODELDATASTOREDURABLEENTRY_H

@class NSDate, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface TIUserModelDataStoreDurableEntry : NSObject

@property (readonly) NSDate *creationDate; // ivar: _creationDate
@property (readonly) NSString *key; // ivar: _key
@property (readonly) NSDate *lastUpdateDate; // ivar: _lastUpdateDate
@property (readonly) NSNumber *value; // ivar: _value


-(id)initWithCreationDate:(id)arg0 withLastUpdateDate:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 ;


@end


#endif