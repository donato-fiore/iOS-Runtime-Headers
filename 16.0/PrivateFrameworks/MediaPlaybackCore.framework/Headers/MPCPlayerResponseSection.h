// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCPLAYERRESPONSESECTION_H
#define MPCPLAYERRESPONSESECTION_H

@class MPModelGenericObject;

#import <Foundation/Foundation.h>

#import "MPCPlayerResponse.h"

@interface MPCPlayerResponseSection : NSObject

@property (readonly, nonatomic, getter=isAutoPlaySection) BOOL autoPlaySection; // ivar: _autoPlaySection
@property (readonly, nonatomic) MPModelGenericObject *metadataObject; // ivar: _metadataObject
@property (readonly, weak, nonatomic) MPCPlayerResponse *response; // ivar: _response


-(id)initWithModelGenericObject:(id)arg0 sectionIndex:(NSInteger)arg1 response:(id)arg2 ;
-(id)remove;


@end


#endif