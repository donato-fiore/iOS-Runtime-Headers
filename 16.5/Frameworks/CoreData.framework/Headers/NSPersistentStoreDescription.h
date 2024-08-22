// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSISTENTSTOREDESCRIPTION_H
#define NSPERSISTENTSTOREDESCRIPTION_H

@class NSMutableDictionary, NSURL, NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSPersistentCloudKitContainerOptions.h"

@interface NSPersistentStoreDescription : NSObject <NSCopying>

 {
    NSMutableDictionary *_options;
}


@property (copy) NSURL *URL; // ivar: _url
@property (retain) NSPersistentCloudKitContainerOptions *cloudKitContainerOptions;
@property (copy) NSString *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (getter=isReadOnly) BOOL readOnly;
@property BOOL shouldAddStoreAsynchronously;
@property BOOL shouldInferMappingModelAutomatically;
@property BOOL shouldMigrateStoreAutomatically;
@property (readonly, copy, nonatomic) NSDictionary *sqlitePragmas;
@property CGFloat timeout;
@property (copy) NSString *type; // ivar: _type


+(id)inMemoryPersistentStoreDescription;
+(id)persistentStoreDescriptionWithURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldInvokeCompletionHandlerConcurrently;
-(BOOL)usesPersistentHistoryTracking;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)mirroringDelegate;
-(id)mirroringOptions;
-(void)dealloc;
-(void)setMirroringDelegate:(id)arg0 ;
-(void)setOption:(id)arg0 forKey:(id)arg1 ;
-(void)setOption:(id)arg0 forMirroringKey:(id)arg1 ;
-(void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)arg0 ;
-(void)setUsesPersistentHistoryTracking:(BOOL)arg0 ;
-(void)setValue:(id)arg0 forPragmaNamed:(id)arg1 ;


@end


#endif