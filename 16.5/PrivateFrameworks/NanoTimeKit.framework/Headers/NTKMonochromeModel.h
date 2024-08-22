// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMONOCHROMEMODEL_H
#define NTKMONOCHROMEMODEL_H

@class UIColor, NSString, CLKDevice;
@protocol CLKMonochromeFilterProvider;

#import <Foundation/Foundation.h>


@interface NTKMonochromeModel : NSObject <CLKMonochromeFilterProvider>



@property (retain, nonatomic) UIColor *accentColor; // ivar: _accentColor
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *nonAccentColor; // ivar: _nonAccentColor
@property (readonly) Class superclass;


-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithDevice:(id)arg0 ;
-(id)interpolatedColorForView:(id)arg0 ;


@end


#endif