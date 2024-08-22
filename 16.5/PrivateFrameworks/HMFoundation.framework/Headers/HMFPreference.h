// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFPREFERENCE_H
#define HMFPREFERENCE_H

@class NSData, NSString, NSNumber;
@protocol NSObject;


#import "HMFObject.h"
#import "HMFPreference.h"

@interface HMFPreference : HMFObject

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, copy, nonatomic) NSData *dataValue;
@property (readonly) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly) NSUInteger options; // ivar: _options
@property (readonly, weak) HMFPreference *parent; // ivar: _parent
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (copy) NSObject<NSObject> *value; // ivar: _value


+(id)shortDescription;
-(id)init;
-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 defaultValue:(id)arg2 parent:(id)arg3 ;
-(id)shortDescription;


@end


#endif