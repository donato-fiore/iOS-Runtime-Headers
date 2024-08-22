// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDPLACEHOLDERIMAGEPROVIDER_H
#define NTKGREENFIELDPLACEHOLDERIMAGEPROVIDER_H

@class CLKImageProvider, UIImage;



@interface NTKGreenfieldPlaceholderImageProvider : CLKImageProvider

@property (retain, nonatomic) UIImage *appIcon; // ivar: _appIcon
@property (nonatomic) CGFloat progress; // ivar: _progress


+(id)provider;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif