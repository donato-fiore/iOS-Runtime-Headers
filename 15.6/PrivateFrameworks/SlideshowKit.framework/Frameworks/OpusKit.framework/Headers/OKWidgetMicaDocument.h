// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETMICADOCUMENT_H
#define OKWIDGETMICADOCUMENT_H

@class NSData, NSString, NSDictionary, CALayer;
@protocol OKSettingsSupport, NSCopying;

#import <Foundation/Foundation.h>

#import "OKWidgetMicaView.h"
#import "OKWidgetMicaViewProxy.h"

@interface OKWidgetMicaDocument : NSObject <OKSettingsSupport, NSCopying>

 {
    OKWidgetMicaView *_widgetMicaView;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *publishedObjects; // ivar: _publishedObjects
@property (retain, nonatomic) NSDictionary *rootDictionary; // ivar: _rootDictionary
@property (retain, nonatomic) CALayer *rootLayer; // ivar: _rootLayer
@property (readonly) Class superclass;
@property (nonatomic) OKWidgetMicaViewProxy *widgetMicaView;


+(id)supportedSettings;
-(CGFloat)documentHeight;
-(CGFloat)documentWidth;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)publishedObjectNames;
-(id)publishedObjectWithName:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingsForKey:(id)arg0 ;
-(void)applySettings:(id)arg0 withResolution:(id)arg1 ;
-(void)dealloc;
-(void)loadMicaDocument;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif