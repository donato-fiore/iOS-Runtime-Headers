// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPODCASTFEEDCHANNELITEM_H
#define IMPODCASTFEEDCHANNELITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMPodcastFeedChannelItem : NSObject

@property (retain, nonatomic) NSString *artworkURL; // ivar: _artworkURL
@property (retain, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSString *displayType; // ivar: _displayType
@property (nonatomic) float logoImageHeight; // ivar: _logoImageHeight
@property (retain, nonatomic) NSString *logoImageURL; // ivar: _logoImageURL
@property (nonatomic) float logoImageWidth; // ivar: _logoImageWidth
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger showCount; // ivar: _showCount
@property (retain, nonatomic) NSString *storeId; // ivar: _storeId
@property (retain, nonatomic) NSString *uberBackgroundImageURL; // ivar: _uberBackgroundImageURL
@property (retain, nonatomic) NSString *uberBackgroundJoeColor; // ivar: _uberBackgroundJoeColor
@property (retain, nonatomic) NSString *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif