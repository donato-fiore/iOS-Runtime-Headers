// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMSCHEMA_H
#define RLMSCHEMA_H

@class NSArray, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RLMSchema : NSObject <NSCopying>

 {
    NSArray *_objectSchema;
    ? _objectStoreSchema;
}


@property (copy, nonatomic) NSArray *objectSchema;
@property (retain, nonatomic) NSMutableDictionary *objectSchemaByName; // ivar: _objectSchemaByName


+(Class)classForString:(id)arg0 ;
+(id)dynamicSchemaFromObjectStoreSchema:(*void)arg0 ;
+(id)partialPrivateSharedSchema;
+(id)partialSharedSchema;
+(id)schemaWithObjectClasses:(id)arg0 ;
+(id)sharedSchema;
+(id)sharedSchemaForClass:(Class)arg0 ;
-(?)objectStoreCopy;
-(BOOL)isEqualToSchema:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)schemaForClassName:(id)arg0 ;


@end


#endif