// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALACONFIGURATIONHISTORY_H
#define _UIALACONFIGURATIONHISTORY_H

@class UILAConfigurationHistory, NSSet, NSString;
@protocol _UIALAPropertySource;



@interface _UIALAConfigurationHistory : UILAConfigurationHistory <_UIALAPropertySource>



@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (nonatomic) NSInteger axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEstablishedAlignmentValues; // ivar: _hasEstablishedAlignmentValues
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInAlignmentLayoutUpdateSection) BOOL inAlignmentLayoutUpdateSection; // ivar: _inAlignmentLayoutUpdateSection
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif