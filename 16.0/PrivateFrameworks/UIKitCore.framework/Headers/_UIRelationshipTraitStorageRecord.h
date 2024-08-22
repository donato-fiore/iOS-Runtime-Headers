// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIRELATIONSHIPTRAITSTORAGERECORD_H
#define _UIRELATIONSHIPTRAITSTORAGERECORD_H

@class NSSet;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding>



@property (readonly, nonatomic) NSSet *addedObjects; // ivar: _addedObjects
@property (readonly, nonatomic) NSSet *removedObjects; // ivar: _removedObjects
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTraitCollection:(id)arg0 addedObjects:(id)arg1 removedObjects:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif