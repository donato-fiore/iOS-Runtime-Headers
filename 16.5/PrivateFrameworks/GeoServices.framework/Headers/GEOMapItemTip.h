// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPITEMTIP_H
#define GEOMAPITEMTIP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDTip.h"

@interface GEOMapItemTip : NSObject

@property (readonly, nonatomic) NSString *bestImageURL;
@property (retain, nonatomic) GEOPDTip *geoTip; // ivar: _geoTip
@property (readonly, nonatomic) BOOL hasTipId;
@property (readonly, nonatomic) BOOL hasTipTime;
@property (readonly, nonatomic) NSString *localizedSnippet;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *tipId;
@property (readonly, nonatomic) CGFloat tipTime;


-(id)initWithGEOPDTip:(id)arg0 ;


@end


#endif