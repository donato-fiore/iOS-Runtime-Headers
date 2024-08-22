// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSPORTIMAGEDETAILS_H
#define WLKSPORTIMAGEDETAILS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKSportImageDetails : NSObject

@property (readonly, nonatomic) BOOL disableGradient; // ivar: _disableGradient
@property (readonly, nonatomic) NSInteger height; // ivar: _height
@property (readonly, nonatomic) BOOL isP3; // ivar: _isP3
@property (readonly, copy, nonatomic) NSString *joeColor; // ivar: _joeColor
@property (readonly, nonatomic) BOOL supportsLayeredImage; // ivar: _supportsLayeredImage
@property (readonly, copy, nonatomic) NSString *url; // ivar: _url
@property (readonly, nonatomic) NSInteger width; // ivar: _width


-(id)initWithDictionary:(id)arg0 ;


@end


#endif