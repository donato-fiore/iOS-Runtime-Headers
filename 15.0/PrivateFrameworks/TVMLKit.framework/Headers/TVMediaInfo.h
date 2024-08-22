// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVMEDIAINFO_H
#define TVMEDIAINFO_H

@class UIColor, UIView, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TVPlaylist.h"

@interface TVMediaInfo : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (copy, nonatomic) NSArray *imageProxies; // ivar: _imageProxies
@property (nonatomic) NSInteger intent; // ivar: _intent
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) TVPlaylist *playlist; // ivar: _playlist


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif