// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3ARTWORKTOKENSET_H
#define ML3ARTWORKTOKENSET_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "ML3Entity.h"

@interface ML3ArtworkTokenSet : NSObject {
    ML3Entity *_entity;
    NSInteger _artworkType;
    NSString *_availableArtworkToken;
    NSString *_fetchableArtworkToken;
    NSInteger _fetchableArtworkSourceType;
    NSDictionary *_artworkSourceToTokenMap;
    BOOL _faultedInBestTokens;
    BOOL _faultedInTokens;
}


@property (readonly, nonatomic) NSString *availableArtworkToken;
@property (readonly, nonatomic) NSInteger fetchableArtworkSourceType;
@property (readonly, nonatomic) NSString *fetchableArtworkToken;
@property (nonatomic) CGFloat retrievalTime; // ivar: _retrievalTime


-(id)artworkTokenForSource:(NSInteger)arg0 ;
-(id)initWithEntity:(id)arg0 artworkType:(NSInteger)arg1 ;
-(void)_faultInBestTokens;
-(void)_faultInTokens;


@end


#endif