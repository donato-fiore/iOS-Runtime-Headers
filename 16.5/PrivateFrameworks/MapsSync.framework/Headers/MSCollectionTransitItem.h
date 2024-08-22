// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCOLLECTIONTRANSITITEM_H
#define MSCOLLECTIONTRANSITITEM_H

@class NSData;


#import "MSCollectionItem.h"

@interface MSCollectionTransitItem : MSCollectionItem {
    ? _muid;
    ? _transitLineStorage;
}


@property (nonatomic) NSUInteger muid;
@property (nonatomic, copy) NSData *transitLineStorage;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 muid:(NSUInteger)arg1 transitLineStorage:(id)arg2 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif