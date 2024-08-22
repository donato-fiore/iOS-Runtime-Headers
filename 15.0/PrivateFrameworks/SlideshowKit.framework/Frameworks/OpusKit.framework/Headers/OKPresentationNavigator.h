// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRESENTATIONNAVIGATOR_H
#define OKPRESENTATIONNAVIGATOR_H

@class NSMutableDictionary, NSString, NSMutableArray;


#import "OKPresentationCanvas.h"

@interface OKPresentationNavigator : OKPresentationCanvas {
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
}


@property (copy, nonatomic) NSString *className; // ivar: _className
@property (readonly, copy, nonatomic) NSMutableArray *pagesNames; // ivar: _pagesNames


+(id)navigatorWithName:(id)arg0 className:(id)arg1 pagesNames:(id)arg2 settings:(id)arg3 userData:(id)arg4 ;
-(id)canvasWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 andName:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3 ;
-(id)pageWithName:(id)arg0 ;
-(id)pages;
-(id)parentPage;
-(void)addPageName:(id)arg0 ;
-(void)dealloc;
-(void)resolveIfNeeded;


@end


#endif