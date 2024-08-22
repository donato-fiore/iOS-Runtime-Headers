// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETMICAVIEWPROXY_H
#define OKWIDGETMICAVIEWPROXY_H

@class NSString, NSDictionary;
@protocol OKCollectionProxyDataSource, OKWidgetMicaViewProxyExports;


#import "OKWidgetView.h"
#import "OKWidgetMicaDocument.h"

@interface OKWidgetMicaViewProxy : OKWidgetView <OKCollectionProxyDataSource, OKWidgetMicaViewProxyExports>

 {
    BOOL _scaleToFit;
    BOOL _autoplay;
    CGFloat _duration;
    CGFloat _seekToTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OKWidgetMicaDocument *micaDocument; // ivar: _micaDocument
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (copy, nonatomic) NSString *resourceName; // ivar: _resourceName
@property (readonly) Class superclass;


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)isPlaying;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(BOOL)settingAutoplay;
-(BOOL)settingScaleToFit;
-(CGFloat)settingDuration;
-(CGFloat)settingSeekToTime;
-(NSUInteger)countOfDictionaryProxy:(id)arg0 ;
-(id)allKeysForDictionaryProxy:(id)arg0 ;
-(id)dictionaryProxy:(id)arg0 objectForKey:(id)arg1 ;
-(id)initWithWidget:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingOptions;
-(id)settingResource;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)loadMicaDocumentIfNeeded;
-(void)pause;
-(void)prepareForRefresh;
-(void)restart;
-(void)resume;
-(void)setSettingAutoplay:(BOOL)arg0 ;
-(void)setSettingDuration:(CGFloat)arg0 ;
-(void)setSettingOptions:(id)arg0 ;
-(void)setSettingResource:(id)arg0 ;
-(void)setSettingScaleToFit:(BOOL)arg0 ;
-(void)setSettingSeekToTime:(CGFloat)arg0 ;
-(void)unloadMicaDocument;
-(void)updateMicaDocumentLayer;


@end


#endif