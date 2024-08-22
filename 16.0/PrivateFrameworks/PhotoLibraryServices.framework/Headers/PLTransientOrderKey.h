// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTRANSIENTORDERKEY_H
#define PLTRANSIENTORDERKEY_H

@class NSManagedObjectContext, NSManagedObjectID;

#import <Foundation/Foundation.h>


@interface PLTransientOrderKey : NSObject

@property (retain, nonatomic) NSManagedObjectContext *moc; // ivar: _moc
@property (retain, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (nonatomic) NSInteger orderValue; // ivar: _orderValue


-(id)childManagedObject;
-(id)description;
-(id)secondaryOrderSortKey;


@end


#endif