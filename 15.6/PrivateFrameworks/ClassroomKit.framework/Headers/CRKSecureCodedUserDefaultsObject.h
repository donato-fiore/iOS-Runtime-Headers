// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSECURECODEDUSERDEFAULTSOBJECT_H
#define CRKSECURECODEDUSERDEFAULTSOBJECT_H

@class NSSet;


#import "CRKUserDefaultsObject.h"

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject

@property (readonly, copy, nonatomic) NSSet *classes; // ivar: _classes


-(BOOL)setValue:(id)arg0 error:(*id)arg1 ;
-(id)initWithDefaults:(id)arg0 key:(id)arg1 classes:(id)arg2 ;
-(id)initWithKey:(id)arg0 classes:(id)arg1 ;
-(id)initWithStore:(id)arg0 key:(id)arg1 classes:(id)arg2 ;
-(id)value;
-(id)valueWithError:(*id)arg0 ;
-(void)registerDefaultValue:(id)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif