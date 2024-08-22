// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUNIQUEDMANAGEDOBJECTDELTA_H
#define STUNIQUEDMANAGEDOBJECTDELTA_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface STUniquedManagedObjectDelta : NSObject

@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) NSMutableSet *updatedProperties; // ivar: _updatedProperties


-(id)initWithUniqueIdentifier:(id)arg0 ;
-(void)deleted;
-(void)inserted;
-(void)removePropertyWithName:(id)arg0 ;
-(void)updatedWithProperties:(id)arg0 ;


@end


#endif