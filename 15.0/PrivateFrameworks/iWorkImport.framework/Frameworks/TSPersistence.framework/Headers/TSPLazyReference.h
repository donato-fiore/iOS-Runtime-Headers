// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPLAZYREFERENCE_H
#define TSPLAZYREFERENCE_H

@class NSString, Protocol, NSUUID;
@protocol TSPReferenceItem, NSCopying, TSPLazyReferenceDelegate;

#import <Foundation/Foundation.h>

#import "TSPObject.h"
#import "TSPComponent.h"

@interface TSPLazyReference : NSObject <TSPReferenceItem, NSCopying>

 {
    os_unfair_lock_s _objectLock;
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    uint8_t _flags;
}


@property (readonly, nonatomic) BOOL allowUnknownObject;
@property (weak, nonatomic) TSPComponent *component; // ivar: _component
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TSPLazyReferenceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExternal;
@property (nonatomic) BOOL keepObjectInMemory;
@property (nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly, nonatomic) id *objectIfLoaded;
@property (retain, nonatomic) Protocol *objectProtocol; // ivar: _objectProtocol
@property (readonly, nonatomic) NSUUID *objectUUID;
@property (readonly, nonatomic) NSInteger ownershipMode;
@property (readonly, nonatomic) TSPObject *strongObject;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger tsp_identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL tsp_isLazyReference;
@property (readonly, nonatomic) TSPObject *weakObject;


+(id)referenceForObject:(id)arg0 ;
+(id)weakReferenceForObject:(id)arg0 ;
+(id)weakReferenceForObject:(id)arg0 retainedUntilArchived:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLazyReference:(id)arg0 ;
-(BOOL)referencesObject:(id)arg0 ;
-(BOOL)validateObject:(id)arg0 expectedObjectClass:(Class)arg1 expectedObjectProtocol:(id)arg2 delegate:(id)arg3 shouldIgnoreFailure:(*BOOL)arg4 shouldUpdateObjectClass:(*BOOL)arg5 error:(*id)arg6 ;
-(NSInteger)releaseObjectIfPossible;
-(id)additionalDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWeakReferenceWithObject:(id)arg0 ;
-(id)initWeakReferenceWithObject:(id)arg0 retainedUntilArchived:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg0 identifier:(NSInteger)arg1 ownershipMode:(NSInteger)arg2 allowUnknownObject:(BOOL)arg3 objectClass:(Class)arg4 objectProtocol:(id)arg5 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithObject:(id)arg0 ownershipMode:(NSInteger)arg1 ;
-(id)objectAndReturnError:(*id)arg0 ;
-(void)addLoadObserver:(id)arg0 action:(SEL)arg1 ;
-(void)resetIdentifierFromCopy:(BOOL)arg0 ;
-(void)resetToIdentifier:(NSInteger)arg0 ;
-(void)retainObject:(id)arg0 ;


@end


#endif