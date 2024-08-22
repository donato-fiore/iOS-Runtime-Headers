// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYBACKRATE_H
#define AVPLAYBACKRATE_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface AVPlaybackRate : NSObject {
    id *_symbolImage;
}


@property (retain, nonatomic, setter=_setUIImage:) UIImage *_uiImage; // ivar: __uiImage
@property (readonly, copy, nonatomic) NSString *compactLocalizedName; // ivar: _compactLocalizedName
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) CGFloat rate; // ivar: _rate
@property (readonly, copy, nonatomic) UIImage *symbolImage;


-(id)debugDescription;
-(id)description;
-(id)initWithRate:(CGFloat)arg0 localizedName:(id)arg1 compactLocalizedName:(id)arg2 ;
-(id)initWithRate:(CGFloat)arg0 localizedName:(id)arg1 compactLocalizedName:(id)arg2 symbolImage:(id)arg3 ;
-(void)_loadUIImageWithCompletionHandler:(id)arg0 ;


@end


#endif