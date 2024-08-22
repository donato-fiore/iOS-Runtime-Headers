// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRESENTATIONPAGE_H
#define OKPRESENTATIONPAGE_H

@class NSString, NSMutableDictionary, NSMutableArray;


#import "OKPresentationCanvas.h"

@interface OKPresentationPage : OKPresentationCanvas {
    NSString *_templateName;
    NSString *_internalNavigatorName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalWidgets;
}


@property (copy, nonatomic) NSString *navigatorName; // ivar: _navigatorName
@property (readonly, copy, nonatomic) NSMutableArray *widgets; // ivar: _widgets


+(id)pageWithName:(id)arg0 templateName:(id)arg1 navigatorName:(id)arg2 properties:(id)arg3 settings:(id)arg4 userData:(id)arg5 widgets:(id)arg6 ;
-(id)canvasWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 andName:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3 ;
-(id)navigator;
-(id)pageTemplate;
-(id)parentNavigator;
-(id)widgetWithName:(id)arg0 ;
-(void)dealloc;
-(void)resolveIfNeeded;


@end


#endif