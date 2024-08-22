// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKURLSERIALIZER_H
#define MKURLSERIALIZER_H


#import <Foundation/Foundation.h>


@interface MKURLSerializer : NSObject



+(id)stringForDirectionsType:(NSUInteger)arg0 ;
+(id)stringForMapType:(NSUInteger)arg0 ;
-(id)mapItemsFromUrl:(id)arg0 options:(*id)arg1 ;
-(id)urlForDirectionsFromMapItem:(id)arg0 toMapItem:(id)arg1 transportType:(NSUInteger)arg2 options:(id)arg3 ;
-(id)urlForOpeningMapItems:(id)arg0 options:(id)arg1 ;


@end


#endif