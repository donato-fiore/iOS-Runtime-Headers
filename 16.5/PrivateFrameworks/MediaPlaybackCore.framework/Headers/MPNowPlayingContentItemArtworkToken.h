// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPNOWPLAYINGCONTENTITEMARTWORKTOKEN_H
#define MPNOWPLAYINGCONTENTITEMARTWORKTOKEN_H

@class NSString;
@protocol MPArtworkDataSourceVisualIdenticality;

#import <Foundation/Foundation.h>


@interface MPNowPlayingContentItemArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>



@property (copy, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 artworkIdentifier:(id)arg1 ;
-(id)stringRepresentation;


@end


#endif