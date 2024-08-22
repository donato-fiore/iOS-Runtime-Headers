// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOPLACEDATAPHOTOINFO_H
#define _GEOPLACEDATAPHOTOINFO_H

@class NSString, NSURL;
@protocol GEOMapItemPhotoInfo;

#import <Foundation/Foundation.h>


@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 ;


@end


#endif