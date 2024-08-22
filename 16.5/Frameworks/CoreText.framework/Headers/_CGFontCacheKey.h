// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CGFONTCACHEKEY_H
#define _CGFONTCACHEKEY_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _CGFontCacheKey : NSObject <NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic) CGFloat opticalSize; // ivar: _opticalSize
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif