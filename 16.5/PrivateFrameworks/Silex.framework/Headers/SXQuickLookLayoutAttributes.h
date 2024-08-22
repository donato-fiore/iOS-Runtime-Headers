// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXQUICKLOOKLAYOUTATTRIBUTES_H
#define SXQUICKLOOKLAYOUTATTRIBUTES_H


#import <Foundation/Foundation.h>


@interface SXQuickLookLayoutAttributes : NSObject

@property (readonly, nonatomic) CGRect errorLabelFrame; // ivar: _errorLabelFrame
@property (readonly, nonatomic) CGRect thumbnailFrame; // ivar: _thumbnailFrame


-(id)initWithThumbnailFrame:(struct CGRect )arg0 errorLabelFrame:(struct CGRect )arg1 ;


@end


#endif