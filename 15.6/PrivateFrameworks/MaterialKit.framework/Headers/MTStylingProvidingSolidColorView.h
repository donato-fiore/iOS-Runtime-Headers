// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSTYLINGPROVIDINGSOLIDCOLORVIEW_H
#define MTSTYLINGPROVIDINGSOLIDCOLORVIEW_H

@class UIView, NSString, NSMutableDictionary;
@protocol MTVisualStylingProviding;



@interface MTStylingProvidingSolidColorView : UIView <MTVisualStylingProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *stylingProviders; // ivar: _stylingProviders
@property (readonly) Class superclass;


+(Class)layerClass;
-(id)stylingProvidingSolidColorLayer;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;


@end


#endif