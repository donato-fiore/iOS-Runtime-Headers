// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3ARTWORKCONFIGURATION_H
#define ML3ARTWORKCONFIGURATION_H

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ML3ArtworkConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSDictionary *artworkConfigurationDictionary; // ivar: _artworkConfigurationDictionary
@property (nonatomic) CGFloat mainScreenScale; // ivar: _mainScreenScale
@property (retain, nonatomic) NSMutableDictionary *supportedSizesCache; // ivar: _supportedSizesCache


+(id)systemConfiguration;
-(id)_supportedSizeKeysForMediaType:(unsigned int)arg0 artworkType:(NSInteger)arg1 ;
-(id)description;
-(id)initWithConfigurationDictionaries:(id)arg0 ;
-(id)sizesToAutogenerateForMediaType:(unsigned int)arg0 artworkType:(NSInteger)arg1 ;
-(id)supportedSizesForMediaType:(unsigned int)arg0 artworkType:(NSInteger)arg1 ;


@end


#endif