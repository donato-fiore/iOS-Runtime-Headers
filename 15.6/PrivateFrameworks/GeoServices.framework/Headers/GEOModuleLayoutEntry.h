// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMODULELAYOUTENTRY_H
#define GEOMODULELAYOUTENTRY_H

@class NSString, NSArray;
@protocol GEOModuleConfigurationProvider;

#import <Foundation/Foundation.h>

#import "GEOPDModuleLayoutEntry.h"

@interface GEOModuleLayoutEntry : NSObject {
    GEOPDModuleLayoutEntry *_moduleLayoutEntry;
    id<GEOModuleConfigurationProvider> *_moduleConfigProvider;
}


@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic) NSArray *modules;


+(id)moduleLayoutEntryFromArray:(id)arg0 ;
-(id)description;
-(id)initWithModuleLayoutEntry:(id)arg0 moduleConfigProvider:(id)arg1 ;


@end


#endif