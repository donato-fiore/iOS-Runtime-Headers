// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBGLORIATILE_H
#define TBGLORIATILE_H

@class NSString, NSDate;
@protocol TBTile;

#import <Foundation/Foundation.h>


@interface TBGloriaTile : NSObject <TBTile>



@property (copy, nonatomic) NSString *WKTString; // ivar: _WKTString
@property (readonly, copy, nonatomic) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat east; // ivar: _east
@property (retain, nonatomic) NSString *etag;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger key; // ivar: _key
@property (nonatomic) CGFloat lat; // ivar: _lat
@property (nonatomic) CGFloat lng; // ivar: _lng
@property (readonly, nonatomic) NSUInteger networkCount;
@property (nonatomic) CGFloat north; // ivar: _north
@property (nonatomic) CGFloat south; // ivar: _south
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tileSize; // ivar: _tileSize
@property (nonatomic) CGFloat west; // ivar: _west
@property (nonatomic) unsigned char zoom; // ivar: _zoom


+(id)gloriaTileWithLat:(CGFloat)arg0 lng:(CGFloat)arg1 zoom:(unsigned char)arg2 ;
+(unsigned char)defaultZoomLevel;
-(id)adjacentTileKeysWithLevel:(unsigned int)arg0 ;
-(id)initWithEncodedKey:(NSUInteger)arg0 zoom:(unsigned char)arg1 ;
-(id)initWithLat:(CGFloat)arg0 lng:(CGFloat)arg1 ;
-(id)initWithLat:(CGFloat)arg0 lng:(CGFloat)arg1 zoom:(unsigned char)arg2 ;
-(id)neighborTileKeysWithRadius:(CGFloat)arg0 ;


@end


#endif