// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUSCHEMAREGISTRY_H
#define NUSCHEMAREGISTRY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUSchemaRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_schemas;
    NSMutableDictionary *_versions;
}




+(id)sharedRegistry;
-(BOOL)_registerSchema:(id)arg0 error:(*id)arg1 ;
-(BOOL)_registerVersion:(id)arg0 withOriginalIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)registerSchema:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerSchemas:(id)arg0 error:(*id)arg1 ;
-(id)_allVersionsWithOriginalIdentifier:(id)arg0 upToVersion:(id)arg1 ;
-(id)_latestVersionWithOriginalIdentifier:(id)arg0 ;
-(id)_schemaWithIdentifier:(id)arg0 ;
-(id)init;
-(id)latestVersionWithNameSpace:(id)arg0 name:(id)arg1 ;
-(id)schemaWithIdentifier:(id)arg0 ;
-(id)versionsCompatibleWithIdentifier:(id)arg0 ;
-(void)_registerBuiltInSchemas;


@end


#endif