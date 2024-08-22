// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXSONGASSETPROVIDER_V1_H
#define FLEXSONGASSETPROVIDER_V1_H

@class NSString;
@protocol FlexSongAssetProviderProtocol;

#import <Foundation/Foundation.h>


@interface FlexSongAssetProvider_V1 : NSObject <FlexSongAssetProviderProtocol>



@property (retain, nonatomic) NSString *audioFileExtension; // ivar: _audioFileExtension
@property (retain, nonatomic) NSString *rootFolderPath; // ivar: _rootFolderPath


-(id)initWithFolderPath:(id)arg0 ;
-(id)urlToAudioContainerForSegmentType:(NSUInteger)arg0 ;
-(id)urlToAudioForSegment:(id)arg0 ;
-(id)urlToRoot;


@end


#endif