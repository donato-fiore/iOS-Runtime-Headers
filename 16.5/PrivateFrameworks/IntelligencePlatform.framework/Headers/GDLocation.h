// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDLOCATION_H
#define GDLOCATION_H

@class NSArray;
@protocol GDTripleIteratorEntityRenderer, GDEntity;

#import <Foundation/Foundation.h>

#import "GDEntityIdentifier.h"

@interface GDLocation : NSObject <GDTripleIteratorEntityRenderer, GDEntity>



@property (readonly, nonatomic) NSArray *addresses; // ivar: _addresses
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier; // ivar: _entityIdentifier
@property (readonly, nonatomic) NSArray *names; // ivar: _names


+(NSUInteger)triplesColumnsRequiredForRendering;
-(id)description;
-(id)initWithTriplesIterator:(id)arg0 ;


@end


#endif