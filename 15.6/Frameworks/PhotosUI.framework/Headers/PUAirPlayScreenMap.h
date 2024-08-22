// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUAIRPLAYSCREENMAP_H
#define PUAIRPLAYSCREENMAP_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface PUAirPlayScreenMap : NSObject {
    NSMapTable *_screens;
}




-(NSUInteger)airPlayScreensCount;
-(id)airPlayScreenForScreen:(id)arg0 ;
-(id)allAirPlayScreens;
-(id)init;
-(void)addDetectedAirPlayScreen:(id)arg0 ;
-(void)removeAirPlayScreen:(id)arg0 ;


@end


#endif