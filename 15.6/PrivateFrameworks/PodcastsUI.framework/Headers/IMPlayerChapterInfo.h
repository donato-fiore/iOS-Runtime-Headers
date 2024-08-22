// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPLAYERCHAPTERINFO_H
#define IMPLAYERCHAPTERINFO_H

@class UIImage, NSData, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface IMPlayerChapterInfo : NSObject {
    UIImage *_artwork;
}


@property (readonly, nonatomic) UIImage *artwork;
@property (retain, nonatomic) NSData *artworkData; // ivar: _artworkData
@property (nonatomic) ? assetTimeRange; // ivar: _assetTimeRange
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSURL *externalURL; // ivar: _externalURL
@property (nonatomic) ? mediaTimeRange; // ivar: _mediaTimeRange
@property (nonatomic) int metadataType; // ivar: _metadataType
@property (nonatomic) CGFloat time; // ivar: _time
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif