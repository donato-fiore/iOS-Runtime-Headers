// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFREADERFONTOPTIONSGROUPCONTROLLER_H
#define _SFREADERFONTOPTIONSGROUPCONTROLLER_H

@class NSMutableDictionary, NSString, NSArray;
@protocol _SFSettingsAlertOptionsGroupController, OS_dispatch_queue, SFReaderContext;

#import <Foundation/Foundation.h>


@interface _SFReaderFontOptionsGroupController : NSObject <_SFSettingsAlertOptionsGroupController>

 {
    CGFloat _fontSize;
    NSMutableDictionary *_fontToItemDictionary;
    NSObject<OS_dispatch_queue> *_fontInstallationStatusQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SFReaderContext> *readerContext; // ivar: _readerContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *values;


-(BOOL)_fontIsImmediatelyAvailable:(id)arg0 ;
-(BOOL)isSelectedValue:(id)arg0 ;
-(id)_attributedStringForReaderFont:(id)arg0 ;
-(id)_downloadAccessoryForNotification:(id)arg0 ;
-(id)_fontForFontNotification:(id)arg0 ;
-(id)_itemForNotification:(id)arg0 ;
-(id)attributedStringForValue:(id)arg0 ;
-(id)initWithReaderContext:(id)arg0 ;
-(id)textStyleForValue:(id)arg0 ;
-(void)_fontDownloadDidBegin:(id)arg0 ;
-(void)_fontDownloadDidFail:(id)arg0 ;
-(void)_fontDownloadDidFinish:(id)arg0 ;
-(void)_fontDownloadProgressDidChange:(id)arg0 ;
-(void)prepareItem:(id)arg0 forValue:(id)arg1 ;
-(void)setSelectedValue:(id)arg0 ;


@end


#endif