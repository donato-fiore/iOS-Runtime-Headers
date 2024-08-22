// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16KEYNOTEQUICKLOOK35KNLIVEVIDEOSOURCESYMBOLTINTCOLORSET_H
#define _TTC16KEYNOTEQUICKLOOK35KNLIVEVIDEOSOURCESYMBOLTINTCOLORSET_H

@class TSUColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC16KeynoteQuicklook35KNLiveVideoSourceSymbolTintColorSet : NSObject <NSCopying>

 {
    ? storage;
}


@property (nonatomic, readonly) TSUColor *backgroundGradientBottomColor;
@property (nonatomic, readonly) TSUColor *backgroundGradientSwatchOutlineColor;
@property (nonatomic, readonly) TSUColor *backgroundGradientTopColor;
@property (nonatomic, readonly) TSUColor *foregroundColor;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) TSUColor *labelColor;
@property (nonatomic, readonly) TSUColor *secondaryLabelColor;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithForegroundColor:(id)arg0 backgroundGradientTopColor:(id)arg1 backgroundGradientBottomColor:(id)arg2 backgroundGradientSwatchOutlineColor:(id)arg3 labelColor:(id)arg4 secondaryLabelColor:(id)arg5 ;


@end


#endif