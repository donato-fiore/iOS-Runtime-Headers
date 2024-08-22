// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSENTITY_H
#define SSENTITY_H

@class NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol SSXPCCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSEntity : NSObject <SSXPCCoding>

 {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_localExternalValues;
    NSMutableDictionary *_localValues;
    NSInteger _pid;
    NSArray *_dirtyLocalExternalProperties;
    NSArray *_dirtyLocalProperties;
}


@property (copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;
@property (copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;
@property (readonly, getter=_isManaged) BOOL _managed;
@property (readonly) NSInteger _persistentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL exists;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)_getExternalValuesMessage;
+(NSInteger)_getValueMessage;
+(NSInteger)_setExternalValuesMessage;
+(NSInteger)_setValuesMessage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setExternalValuesWithDictionary:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(BOOL)setValuesWithDictionary:(id)arg0 ;
-(id)_initWithPersistentIdentifier:(NSInteger)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)valueForExternalProperty:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)__addCachedExternalValues:(id)arg0 ;
-(void)__addCachedPropertyValues:(id)arg0 ;
-(void)_addCachedExternalValues:(id)arg0 ;
-(void)_addCachedPropertyValues:(id)arg0 ;
-(void)_becomeManagedOnConnection:(id)arg0 ;
-(void)_getValues:(*id)arg0 forProperties:(*id)arg1 count:(NSUInteger)arg2 message:(NSInteger)arg3 ;
-(void)_resetLocalIVars;
-(void)_setDirtyCachedExternalProperties:(id)arg0 ;
-(void)_setDirtyCachedProperties:(id)arg0 ;
-(void)dealloc;
-(void)getValues:(*id)arg0 forExternalProperties:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)getValues:(*id)arg0 forProperties:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)resetCachedExternalProperties:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)resetCachedProperties:(*id)arg0 count:(NSUInteger)arg1 ;


@end


#endif