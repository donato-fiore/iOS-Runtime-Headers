// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRESENTATIONWIDGET_H
#define OKPRESENTATIONWIDGET_H

@class NSString, NSMutableDictionary, NSMutableArray;


#import "OKPresentationCanvas.h"

@interface OKPresentationWidget : OKPresentationCanvas {
    NSString *_internalName;
    NSString *_internalClassName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalSubWidgets;
    NSMutableArray *_internalMaterials;
}


@property (copy, nonatomic) NSString *className; // ivar: _className
@property (copy, nonatomic) NSMutableArray *materials; // ivar: _materials
@property (readonly, copy, nonatomic) NSMutableArray *subWidgets; // ivar: _subWidgets
@property (copy, nonatomic) NSString *templateName; // ivar: _templateName


+(id)widgetWithName:(id)arg0 templateName:(id)arg1 className:(id)arg2 settings:(id)arg3 userData:(id)arg4 subWidgets:(id)arg5 materials:(id)arg6 ;
-(id)canvasWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 forPresentation:(id)arg1 andParent:(id)arg2 ;
-(id)materialWithName:(id)arg0 ;
-(id)parentPage;
-(id)parentWidget;
-(id)subWidgetWithName:(id)arg0 ;
-(id)widgetTemplate;
-(void)dealloc;
-(void)resolveIfNeeded;


@end


#endif