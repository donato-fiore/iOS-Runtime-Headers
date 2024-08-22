// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSCORRECTEDMAPITEMPROVIDER_H
#define MAPSSUGGESTIONSCORRECTEDMAPITEMPROVIDER_H

@class NSString;
@protocol MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsMeCard.h"

@interface MapsSuggestionsCorrectedMapItemProvider : NSObject <MapsSuggestionsMeCardObserver>

 {
    MapsSuggestionsMeCard *_meCard;
    id<MapsSuggestionsMeCardReader> *_meCardReader;
    id *_updateHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithMeCardReader:(id)arg0 handler:(id)arg1 ;
-(id)mapItemFormShortcutForCNIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)meCardReader:(id)arg0 didUpdateMeCard:(id)arg1 ;


@end


#endif