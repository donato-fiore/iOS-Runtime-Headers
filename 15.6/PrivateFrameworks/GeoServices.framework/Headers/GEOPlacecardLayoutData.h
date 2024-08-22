// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPLACECARDLAYOUTDATA_H
#define GEOPLACECARDLAYOUTDATA_H

@class NSString;
@protocol GEOModuleConfigurationProvider;

#import <Foundation/Foundation.h>

#import "GEOPDPlacecardLayoutData.h"
#import "GEOPlacecardLayoutConfiguration.h"
#import "GEOModuleLayoutEntry.h"

@interface GEOPlacecardLayoutData : NSObject <GEOModuleConfigurationProvider>

 {
    GEOPDPlacecardLayoutData *_placecardLayoutData;
    GEOPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
}


@property (readonly, nonatomic) GEOModuleLayoutEntry *currentModuleLayoutEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPlacecardLayoutData:(id)arg0 ;
-(id)moduleConfigurationForIndex:(NSUInteger)arg0 ;


@end


#endif