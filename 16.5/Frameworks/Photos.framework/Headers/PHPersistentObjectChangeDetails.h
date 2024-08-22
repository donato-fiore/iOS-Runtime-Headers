// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPERSISTENTOBJECTCHANGEDETAILS_H
#define PHPERSISTENTOBJECTCHANGEDETAILS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PHPersistentObjectChangeDetails : NSObject

@property (readonly, nonatomic) NSSet *deletedLocalIdentifiers; // ivar: _deletedLocalIdentifiers
@property (readonly, nonatomic) NSSet *insertedLocalIdentifiers; // ivar: _insertedLocalIdentifiers
@property (readonly, nonatomic) NSInteger objectType; // ivar: _objectType
@property (readonly, nonatomic) NSSet *updatedLocalIdentifiers; // ivar: _updatedLocalIdentifiers


-(id)initWithObjectType:(NSInteger)arg0 insertedIdentifiers:(id)arg1 updatedIdentifiers:(id)arg2 deletedIdentifiers:(id)arg3 ;


@end


#endif