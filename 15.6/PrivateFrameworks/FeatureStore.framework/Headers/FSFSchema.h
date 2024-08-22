// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FSFSCHEMA_H
#define FSFSCHEMA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FSFSchema : NSObject {
    NSDictionary *_schemaData;
}


@property (readonly, nonatomic) NSDictionary *schemaData;


-(id)initSchemaForClass:(id)arg0 inLanguage:(id)arg1 withRepoUrl:(id)arg2 pkgName:(id)arg3 version:(id)arg4 ;


@end


#endif