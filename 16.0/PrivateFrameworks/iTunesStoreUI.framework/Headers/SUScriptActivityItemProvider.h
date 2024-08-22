// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTACTIVITYITEMPROVIDER_H
#define SUSCRIPTACTIVITYITEMPROVIDER_H

@class NSString, WebScriptObject;
@protocol SUActivityItemProviderDelegate;


#import "SUScriptObject.h"
#import "SUScriptFunction.h"
#import "SUActivityItemProvider.h"

@interface SUScriptActivityItemProvider : SUScriptObject <SUActivityItemProviderDelegate>

 {
    id *_item;
    id *_itemBlock;
    SUScriptFunction *_itemFunction;
    int _loadState;
    NSString *_mimeType;
    SUActivityItemProvider *_nativeProvider;
    int _previewLoadState;
}


@property (readonly) NSString *MIMEType;
@property (readonly) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) WebScriptObject *itemFunction;
@property (readonly) SUActivityItemProvider *nativeActivityItemProvider;
@property CGFloat progress;
@property (copy) NSString *status;
@property (readonly) Class superclass;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_newPlaceholderWithMIMEType:(id)arg0 ;
-(id)activitySupportsMIMEType:(id)arg0 ;
-(id)attributeKeys;
-(id)initWithMIMEType:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)_finishItemWithItem:(id)arg0 ;
-(void)_finishPreviewWithImage:(id)arg0 ;
-(void)activityItemProvider:(id)arg0 provideItemUsingBlock:(id)arg1 ;
-(void)dealloc;
-(void)setItem:(id)arg0 ;
-(void)setPreviewImageWithURLString:(id)arg0 ;


@end


#endif