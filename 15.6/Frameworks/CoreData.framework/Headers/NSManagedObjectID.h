// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMANAGEDOBJECTID_H
#define NSMANAGEDOBJECTID_H

@class NSString;
@protocol NSFetchRequestResult, NSCopying;

#import <Foundation/Foundation.h>

#import "NSEntityDescription.h"
#import "NSPersistentStore.h"

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSEntityDescription *entity;
@property (readonly) NSUInteger hash;
@property (readonly, weak) NSPersistentStore *persistentStore;
@property (readonly) Class superclass;
@property (readonly, getter=isTemporaryID) BOOL temporaryID;


+(BOOL)accessInstanceVariablesDirectly;
+(NSInteger)version;
+(void)initialize;
-(BOOL)_isDeallocating;
-(BOOL)_isPersistentStoreAlive;
-(BOOL)_preferReferenceData64;
-(BOOL)_tryRetain;
-(NSInteger)_referenceData64;
-(NSInteger)compare:(id)arg0 ;
-(id)URIRepresentation;
-(id)_referenceData;
-(id)_retainedURIString;
-(id)_storeIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithPK64:(NSInteger)arg0 ;
-(int)_temporaryIDCounter;


@end


#endif