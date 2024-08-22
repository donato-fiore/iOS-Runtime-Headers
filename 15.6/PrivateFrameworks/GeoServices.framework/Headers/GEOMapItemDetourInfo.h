// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPITEMDETOURINFO_H
#define GEOMAPITEMDETOURINFO_H

@class NSData;

#import <Foundation/Foundation.h>

#import "GEOPDResultDetourInfo.h"

@interface GEOMapItemDetourInfo : NSObject

@property (readonly, nonatomic) CGFloat detourDistance;
@property (readonly, nonatomic, getter=_detourInfo) GEOPDResultDetourInfo *detourInfo; // ivar: _detourInfo
@property (readonly, nonatomic) NSData *detourInfoAsData;
@property (readonly, nonatomic) CGFloat detourTime;
@property (readonly, nonatomic) CGFloat distanceToPlace;
@property (readonly, nonatomic) CGFloat timeToPlace;


-(id)init;
-(id)initWithResultDetourInfo:(id)arg0 ;


@end


#endif