// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPMEDIALIBRARYENTITYCHANGE_H
#define _MPMEDIALIBRARYENTITYCHANGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MPMediaEntity.h"

@interface _MPMediaLibraryEntityChange : NSObject

@property (readonly, copy, nonatomic) NSString *anchor; // ivar: _anchor
@property (readonly, nonatomic) NSInteger deletionType; // ivar: _deletionType
@property (readonly, nonatomic) MPMediaEntity *entity; // ivar: _entity


-(id)initWithEntity:(id)arg0 anchor:(id)arg1 deletionType:(NSInteger)arg2 ;


@end


#endif