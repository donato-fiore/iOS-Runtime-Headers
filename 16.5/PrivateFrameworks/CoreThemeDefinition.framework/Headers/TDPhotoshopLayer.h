// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDPHOTOSHOPLAYER_H
#define TDPHOTOSHOPLAYER_H

@class NSManagedObject, NSString;


#import "TDPhotoshopLayer.h"
#import "TDPhotoshopRenditionSpec.h"

@interface TDPhotoshopLayer : NSManagedObject

@property (retain, nonatomic) TDPhotoshopLayer *childLayer;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) TDPhotoshopLayer *parentLayer;
@property (retain, nonatomic) TDPhotoshopRenditionSpec *rendition;


-(id)hierarchicalLayerNames;


@end


#endif