// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTPREVIEWOVERLAY_H
#define SUSCRIPTPREVIEWOVERLAY_H

@class NSString;


#import "SUScriptObject.h"

@interface SUScriptPreviewOverlay : SUScriptObject

@property (copy) id *height;
@property (copy) id *right;
@property (copy) id *top;
@property (copy) NSString *userInfo;
@property (readonly, getter=isVisible) id *visible;
@property (copy) id *width;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)hide:(id)arg0 ;
-(void)loadURLRequest:(id)arg0 ;
-(void)show:(id)arg0 ;


@end


#endif