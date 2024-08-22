// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBCOERCIONREGISTRY_H
#define PBCOERCIONREGISTRY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBCoercionRegistry : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSMutableDictionary *member_classCoercionByClass; // ivar: _member_classCoercionByClass
@property (retain, nonatomic) NSMutableDictionary *member_exporterByClass; // ivar: _member_exporterByClass
@property (retain, nonatomic) NSMutableDictionary *member_importerByClass; // ivar: _member_importerByClass


+(id)archivedDataFromObject:(id)arg0 requestedType:(id)arg1 outError:(*id)arg2 ;
+(id)defaultRegistry;
+(id)objectFromArchivedData:(id)arg0 URL:(id)arg1 requestedClass:(Class)arg2 typeIdentifier:(id)arg3 outError:(*id)arg4 ;
-(BOOL)canCoerceFromRepresentationConformingToType:(id)arg0 toObjectOfClass:(Class)arg1 ;
-(BOOL)canCoerceObjectOfClass:(Class)arg0 toObjectOfClass:(Class)arg1 ;
-(BOOL)canCoerceObjectOfClass:(Class)arg0 toRepresentationConformingToType:(id)arg1 ;
-(id)_availableClassesToCoerceFromClass:(Class)arg0 ;
-(id)_member_acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg0 ;
-(id)_member_availableClassesToCoerceToFromClass:(Class)arg0 ;
-(id)_member_availableDirectRepresentationTypesForClass:(Class)arg0 ;
-(id)_member_exporterFromClass:(Class)arg0 toType:(id)arg1 ;
-(id)_newObjectOfClass:(Class)arg0 fromData:(id)arg1 URL:(id)arg2 ofType:(id)arg3 outError:(*id)arg4 ;
-(id)acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg0 ;
-(id)availableRepresentationTypesForClass:(Class)arg0 ;
-(id)init;
-(id)newObjectOfClass:(Class)arg0 fromContentsOfURL:(id)arg1 ofType:(id)arg2 outError:(*id)arg3 ;
-(id)newObjectOfClass:(Class)arg0 fromData:(id)arg1 ofType:(id)arg2 outError:(*id)arg3 ;
-(void)_member_registerCoercionFromObjectOfClass:(Class)arg0 toObjectOfClass:(Class)arg1 coercionBlock:(id)arg2 ;
-(void)_member_registerCoercionFromObjectOfClass:(Class)arg0 toRepresentationOfType:(id)arg1 coercionBlock:(id)arg2 ;
-(void)_member_registerCoercionFromRepresentationConformingToType:(id)arg0 toObjectOfClass:(Class)arg1 coercionBlock:(id)arg2 ;
-(void)loadRepresentationOfObject:(id)arg0 asType:(id)arg1 completionBlock:(id)arg2 ;
-(void)registerCoercionFromObjectOfClass:(Class)arg0 toObjectOfClass:(Class)arg1 coercionBlock:(id)arg2 ;
-(void)registerCoercionFromObjectOfClass:(Class)arg0 toRepresentationOfType:(id)arg1 coercionBlock:(id)arg2 ;
-(void)registerCoercionFromRepresentationConformingToType:(id)arg0 toObjectOfClass:(Class)arg1 coercionBlock:(id)arg2 ;


@end


#endif