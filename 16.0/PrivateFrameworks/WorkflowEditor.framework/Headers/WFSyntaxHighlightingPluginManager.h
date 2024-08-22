// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSYNTAXHIGHLIGHTINGPLUGINMANAGER_H
#define WFSYNTAXHIGHLIGHTINGPLUGINMANAGER_H

@class JSContext, NSMutableArray, JSManagedValue, UIColor;

#import <Foundation/Foundation.h>


@interface WFSyntaxHighlightingPluginManager : NSObject {
    JSContext *_context;
    NSMutableArray *_tokenLines;
    NSUInteger _minimumChangedLine;
    NSUInteger _maxChangedLine;
    JSManagedValue *_colorScheme;
    JSManagedValue *_highlightingPlugin;
    JSManagedValue *_syntaxPlugin;
}


@property (readonly, nonatomic) UIColor *defaultBackgroundColor;
@property (readonly, nonatomic) UIColor *defaultForegroundColor;
@property (nonatomic) NSUInteger syntaxHighlightingAppearance; // ivar: _syntaxHighlightingAppearance
@property (nonatomic) NSUInteger syntaxHighlightingType; // ivar: _syntaxHighlightingType


-(BOOL)didChangeLine:(NSUInteger)arg0 string:(id)arg1 ;
-(id)configurationFilesForAppearance:(NSUInteger)arg0 ;
-(id)init;
-(id)loadPluginUsingConfigWithModuleName:(id)arg0 module:(id)arg1 ;
-(void)dealloc;
-(void)didAddLineAtIndex:(NSUInteger)arg0 ;
-(void)didRemoveLineAtIndex:(NSUInteger)arg0 ;
-(void)discardManagedReferencesForLineNumber:(NSUInteger)arg0 ;
-(void)highlightAllTokensWithCallback:(id)arg0 ;
-(void)loadColorSchemePlugin;
-(void)loadHighlightingPlugin;
-(void)loadPlugins;
-(void)loadSyntaxPlugin;
-(void)reloadPlugins;
-(void)unloadPlugins;


@end


#endif