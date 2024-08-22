// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYHUDVIEWCONFIGURATION_H
#define PXSTORYHUDVIEWCONFIGURATION_H

@class NSString, UIColor;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>


@interface PXStoryHUDViewConfiguration : NSObject <PXGViewUserData>



@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) CGPoint textInsets; // ivar: _textInsets
@property (nonatomic) CGPoint textRelativePosition; // ivar: _textRelativePosition
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif