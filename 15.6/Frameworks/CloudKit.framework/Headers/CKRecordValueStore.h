// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKRECORDVALUESTORE_H
#define CKRECORDVALUESTORE_H

@class NSMutableSet, NSString, NSMutableDictionary;
@protocol CKRecordKeyValueSetting, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKRecord.h"

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding>

 {
    BOOL _trackChanges;
    CKRecord *_record;
}


@property (retain, nonatomic) NSMutableSet *changedKeysSet; // ivar: _changedKeysSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *originalValues; // ivar: _originalValues
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *values; // ivar: _values


+(BOOL)supportsSecureCoding;
-(BOOL)checkProperties:(BOOL)arg0 withValueCheckBlock:(id)arg1 ;
-(BOOL)checkPropertiesWithModifiedPropertiesOnly:(BOOL)arg0 includingAllArrayItems:(BOOL)arg1 withValueCheckBlock:(id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)_processValue:(id)arg0 forKey:(id)arg1 shouldSetValue:(*BOOL)arg2 ;
-(id)allKeys;
-(id)changedKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)recordID;
-(id)valueForKey:(id)arg0 ;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetChangedKeys;
-(void)setNilValueForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setObjectNoValidate:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif