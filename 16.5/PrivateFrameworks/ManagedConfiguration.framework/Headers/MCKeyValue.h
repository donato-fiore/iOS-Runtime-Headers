// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCKEYVALUE_H
#define MCKEYVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MCKeyValue : NSObject

@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSUInteger valueType; // ivar: _valueType


-(id)initWithData:(id)arg0 localizedKey:(id)arg1 ;
-(id)initWithDate:(id)arg0 localizedKey:(id)arg1 ;
-(id)initWithLocalizedArray:(id)arg0 localizedKey:(id)arg1 ;
-(id)initWithLocalizedString:(id)arg0 localizedKey:(id)arg1 ;
-(id)initWithValue:(id)arg0 localizedKey:(id)arg1 ;
-(void)setData:(id)arg0 localizedKey:(id)arg1 ;
-(void)setDate:(id)arg0 localizedKey:(id)arg1 ;
-(void)setLocalizedArray:(id)arg0 localizedKey:(id)arg1 ;
-(void)setLocalizedString:(id)arg0 localizedKey:(id)arg1 ;


@end


#endif