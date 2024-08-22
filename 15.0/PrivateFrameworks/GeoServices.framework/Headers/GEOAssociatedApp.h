// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOASSOCIATEDAPP_H
#define GEOASSOCIATEDAPP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "GEOPDAssociatedApp.h"

@interface GEOAssociatedApp : NSObject

@property (readonly, nonatomic) NSArray *alternateAppAdamIds;
@property (retain, nonatomic) GEOPDAssociatedApp *geoAssociatedApp; // ivar: _geoAssociatedApp
@property (readonly, nonatomic) BOOL hasPreferredAppAdamId;
@property (readonly, nonatomic) NSString *preferredAppAdamId;


-(id)initWithGEOPDAssociatedApp:(id)arg0 ;


@end


#endif