// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUVISUALSTYLINGPROVIDER_H
#define MRUVISUALSTYLINGPROVIDER_H

@class UIColor, NSString, NSHashTable, MTVisualStylingProvider;
@protocol MTVisualStylingProviderObservingPrivate;

#import <Foundation/Foundation.h>


@interface MRUVisualStylingProvider : NSObject <MTVisualStylingProviderObservingPrivate>

 {
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tertiaryColor;
    UIColor *_quaternaryColor;
    UIColor *_separatorColor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *quaternaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsVibrancy; // ivar: _supportsVibrancy
@property (retain, nonatomic) UIColor *tertiaryColor;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(CGFloat)alphaForNowPlayingStyle:(NSInteger)arg0 ;
-(NSInteger)blendModeForNowPlayingStyle:(NSInteger)arg0 ;
-(NSInteger)visualStyleForNowPlayingStyle:(NSInteger)arg0 ;
-(id)colorForNowPlayingStyle:(NSInteger)arg0 ;
-(id)init;
-(id)initWithVisualStylingProvider:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applyStyle:(NSInteger)arg0 toView:(id)arg1 ;
-(void)applyStyle:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)notifyObservers;
-(void)providedStylesDidChangeForProvider:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif