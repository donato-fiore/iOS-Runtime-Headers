// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPNOWPLAYINGCONTENTITEMREMOTEARTWORKTOKEN_H
#define MPNOWPLAYINGCONTENTITEMREMOTEARTWORKTOKEN_H

@class NSString, MPExportableArtworkProperties;
@protocol MPArtworkDataSourceVisualIdenticality;

#import <Foundation/Foundation.h>


@interface MPNowPlayingContentItemRemoteArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>



@property (readonly, copy, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (readonly, copy, nonatomic) MPExportableArtworkProperties *artworkProperties; // ivar: _artworkProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 artworkProperties:(id)arg1 artworkIdentifier:(id)arg2 ;
-(id)stringRepresentation;


@end


#endif