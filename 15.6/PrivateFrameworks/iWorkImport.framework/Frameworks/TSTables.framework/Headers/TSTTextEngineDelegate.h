// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTEXTENGINEDELEGATE_H
#define TSTTEXTENGINEDELEGATE_H

@class TSWPPadding, TSULocale;
@protocol TSWPTextDelegate, TSWPStyleProviding;

#import <Foundation/Foundation.h>


@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>

 {
    TSWPPadding *mPadding;
    int mVerticalAlignment;
}


@property (readonly, nonatomic) BOOL forceWesternLineBreaking;
@property (readonly, nonatomic) TSULocale *locale; // ivar: mLocale
@property (nonatomic) CGFloat maxWidthForChildren; // ivar: mMaxWidthForChildren
@property (readonly, nonatomic) TSWPPadding *padding;
@property (readonly, nonatomic) BOOL shouldHyphenate; // ivar: mShouldHyphenate
@property (weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: mStyleProvidingSource
@property (readonly, nonatomic) int verticalAlignment;


-(id)initWithPadding:(struct UIEdgeInsets )arg0 verticalAlignment:(int)arg1 locale:(id)arg2 shouldHyphenate:(BOOL)arg3 ;


@end


#endif