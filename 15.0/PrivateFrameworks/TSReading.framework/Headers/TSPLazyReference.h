// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPLAZYREFERENCE_H
#define TSPLAZYREFERENCE_H

@class TSPComponent;
@protocol NSCopying, TSPLazyReferenceDelegate;

#import <Foundation/Foundation.h>

#import "TSPObject.h"

@interface TSPLazyReference : NSObject <NSCopying>

 {
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    BOOL _allowUnknownObject;
}


@property (weak, nonatomic) TSPComponent *component; // ivar: _component
@property (weak, nonatomic) NSObject<TSPLazyReferenceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (nonatomic) BOOL isWeak; // ivar: _isWeak
@property (readonly, nonatomic) id *object;
@property (readonly, nonatomic) id *objectIfLoaded;
@property (retain, nonatomic) TSPObject *strongObject;
@property (readonly, nonatomic) TSPObject *weakObject;


+(id)referenceForObject:(id)arg0 ;
-(BOOL)discardStrongObjectIfPossible;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLazyReference:(id)arg0 ;
-(BOOL)referencesObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithDelegate:(id)arg0 identifier:(NSInteger)arg1 isWeak:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 ;
-(id)initWithTSPObject:(id)arg0 ;


@end


#endif