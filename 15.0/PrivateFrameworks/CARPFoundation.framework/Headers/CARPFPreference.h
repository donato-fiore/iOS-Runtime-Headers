// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFPREFERENCE_H
#define CARPFPREFERENCE_H

@class NSData, NSString, NSNumber;
@protocol NSObject;


#import "CARPFObject.h"
#import "CARPFPreference.h"

@interface CARPFPreference : CARPFObject

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, copy, nonatomic) NSData *dataValue;
@property (readonly) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly) NSUInteger options; // ivar: _options
@property (readonly, weak) CARPFPreference *parent; // ivar: _parent
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (copy) NSObject<NSObject> *value; // ivar: _value


+(id)carpf_shortDescription;
-(id)carpf_shortDescription;
-(id)init;
-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 defaultValue:(id)arg2 parent:(id)arg3 ;


@end


#endif