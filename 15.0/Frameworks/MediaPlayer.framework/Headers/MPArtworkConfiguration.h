// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPARTWORKCONFIGURATION_H
#define MPARTWORKCONFIGURATION_H

@class ML3ArtworkConfiguration;

#import <Foundation/Foundation.h>


@interface MPArtworkConfiguration : NSObject

@property (retain, nonatomic) ML3ArtworkConfiguration *artworkConfiguration; // ivar: _artworkConfiguration


+(id)systemConfiguration;
-(id)description;
-(id)initWithConfigurationDictionaries:(id)arg0 ;
-(id)sizesToAutogenerateForMediaType:(NSUInteger)arg0 artworkType:(NSInteger)arg1 ;
-(id)supportedSizesForMediaType:(NSUInteger)arg0 artworkType:(NSInteger)arg1 ;


@end


#endif