// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRESENTATIONMATERIAL_H
#define OKPRESENTATIONMATERIAL_H

@class NSString, NSMutableDictionary;


#import "OKPresentationCanvas.h"

@interface OKPresentationMaterial : OKPresentationCanvas {
    NSString *_templateName;
    NSString *_internalName;
    NSString *_internalClassName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
}


@property (copy, nonatomic) NSString *className; // ivar: _className


+(id)materialWithName:(id)arg0 templateName:(id)arg1 className:(id)arg2 settings:(id)arg3 userData:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 forPresentation:(id)arg1 andParent:(id)arg2 ;
-(id)materialTemplate;
-(id)parentWidget;
-(void)dealloc;
-(void)resolveIfNeeded;


@end


#endif