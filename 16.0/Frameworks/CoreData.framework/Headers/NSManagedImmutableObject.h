// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMANAGEDIMMUTABLEOBJECT_H
#define NSMANAGEDIMMUTABLEOBJECT_H


#import <Foundation/Foundation.h>

#import "NSEntityDescription.h"
#import "NSManagedObjectID.h"

@interface NSManagedImmutableObject : NSObject

@property (readonly) NSEntityDescription *entity;
@property (readonly) NSManagedObjectID *objectID;


+(BOOL)_isGeneratedClass;
+(BOOL)_isGeneratedClass_1;
+(Class)classForEntity:(id)arg0 ;
+(id)_retain_1;
+(id)allocWithEntity:(id)arg0 ;
+(id)retain;
+(struct ? *)_PFMOClassFactoryData;
+(void)_release_1;
+(void)release;
-(*unk)methodForSelector:(SEL)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForKey:(id)arg0 ;


@end


#endif