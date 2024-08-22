// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODIRECTIONINTENT_H
#define GEODIRECTIONINTENT_H


#import <Foundation/Foundation.h>

#import "GEOResolvedItem.h"

@interface GEODirectionIntent : NSObject

@property (readonly, nonatomic) GEOResolvedItem *destination; // ivar: _destination
@property (readonly, nonatomic) GEOResolvedItem *origin; // ivar: _origin
@property (readonly, nonatomic) int transportType; // ivar: _transportType


-(id)initWithDirectionIntent:(id)arg0 ;


@end


#endif