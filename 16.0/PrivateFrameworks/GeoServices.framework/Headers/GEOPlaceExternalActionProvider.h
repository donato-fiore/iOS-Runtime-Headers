// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACEEXTERNALACTIONPROVIDER_H
#define GEOPLACEEXTERNALACTIONPROVIDER_H

@class NSMapTable, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDActionLink.h"

@interface GEOPlaceExternalActionProvider : NSObject {
    GEOPDActionLink *_actionLink;
    NSMapTable *_attributionMap;
}


@property (readonly, nonatomic) NSString *appAdamId;
@property (readonly, nonatomic) NSArray *supportedIntegrations;


-(id)initWithActionLink:(id)arg0 attributionMap:(id)arg1 ;


@end


#endif