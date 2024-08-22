// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLGLOBALKEYVALUEATTRIBUTES_H
#define PLGLOBALKEYVALUEATTRIBUTES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLGlobalKeyValueAttributes : NSObject

@property (retain, nonatomic) Class anyValueClass; // ivar: _anyValueClass
@property (nonatomic) BOOL includeInMigrationHistory; // ivar: _includeInMigrationHistory
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) short type; // ivar: _type


+(id)attributesWithKey:(id)arg0 type:(short)arg1 ;
+(id)attributesWithKey:(id)arg0 type:(short)arg1 includeInMigrationHistory:(BOOL)arg2 anyValueClass:(Class)arg3 ;
-(id)initWithKey:(id)arg0 type:(short)arg1 includeInMigrationHistory:(BOOL)arg2 anyValueClass:(Class)arg3 ;


@end


#endif