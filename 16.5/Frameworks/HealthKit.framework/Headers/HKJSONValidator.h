// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKJSONVALIDATOR_H
#define HKJSONVALIDATOR_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKJSONValidator : NSObject {
    NSMutableDictionary *_subschemaCache;
}


@property (readonly, copy, nonatomic) NSObject<NSCopying> *schema; // ivar: _schema


+(BOOL)validateJSONObject:(id)arg0 withSchemaNamed:(id)arg1 bundle:(id)arg2 error:(*id)arg3 ;
+(id)searchPaths;
+(void)registerSearchPath:(id)arg0 ;
-(BOOL)_validateArray:(id)arg0 schema:(id)arg1 keyStack:(id)arg2 ;
-(BOOL)_validateBoolean:(id)arg0 ;
-(BOOL)_validateDictionary:(id)arg0 schema:(id)arg1 keyStack:(id)arg2 ;
-(BOOL)_validateFingerprintSHA256:(id)arg0 ;
-(BOOL)_validateJSONObject:(id)arg0 keyStack:(id)arg1 ;
-(BOOL)_validatePrimitive:(id)arg0 schema:(id)arg1 keyStack:(id)arg2 ;
-(BOOL)_validateTimezone:(id)arg0 ;
-(BOOL)_validateURL:(id)arg0 ;
-(BOOL)_validateValue:(id)arg0 schema:(id)arg1 keyStack:(id)arg2 root:(BOOL)arg3 ;
-(BOOL)_validateValue:(id)arg0 subschemaNamed:(id)arg1 keyStack:(id)arg2 ;
-(BOOL)validateJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)_loadSubschemaNamed:(id)arg0 ;
-(id)_mismatchErrorFromKeyStack:(id)arg0 ;
-(id)init;
-(id)initWithSchema:(id)arg0 ;
-(id)initWithSchema:(id)arg0 subschemaCache:(id)arg1 ;
-(id)initWithSchemaNamed:(id)arg0 bundle:(id)arg1 ;


@end


#endif