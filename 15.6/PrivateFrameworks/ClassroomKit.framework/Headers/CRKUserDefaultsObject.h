// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKUSERDEFAULTSOBJECT_H
#define CRKUSERDEFAULTSOBJECT_H

@class NSString;
@protocol CRKKeyObjectStoring;

#import <Foundation/Foundation.h>


@interface CRKUserDefaultsObject : NSObject

@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSObject<CRKKeyObjectStoring> *store; // ivar: _store
@property (copy) id *value;


-(id)initWithDefaults:(id)arg0 key:(id)arg1 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithStore:(id)arg0 key:(id)arg1 ;
-(void)registerDefaultValue:(id)arg0 ;


@end


#endif