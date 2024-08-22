// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFLOCALIZABLESTRINGKEY_H
#define HFLOCALIZABLESTRINGKEY_H

@class NSArray, NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFLocalizableStringKey : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *argumentKeys; // ivar: _argumentKeys
@property (readonly, nonatomic) NSMutableDictionary *argumentMap; // ivar: _argumentMap
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) id *stringLocalizationBlock; // ivar: _stringLocalizationBlock


+(id)stringKeyWithKey:(id)arg0 argumentKeys:(id)arg1 ;
+(id)stringKeyWithKey:(id)arg0 arguments:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithKey:(id)arg0 argumentKeys:(id)arg1 ;
-(id)localizedStringWithArgumentBlock:(id)arg0 ;


@end


#endif