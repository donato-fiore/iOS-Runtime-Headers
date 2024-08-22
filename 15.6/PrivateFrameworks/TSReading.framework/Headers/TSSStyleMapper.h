// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSSTYLEMAPPER_H
#define TSSSTYLEMAPPER_H

@class TSURetainedPointerKeyDictionary, NSMutableArray, NSString;
@protocol TSKStyleMapper;

#import <Foundation/Foundation.h>

#import "TSSStylesheet.h"
#import "TSKAddedToDocumentContext.h"

@interface TSSStyleMapper : NSObject <TSKStyleMapper>

 {
    TSSStylesheet *_targetStylesheet;
    TSSStylesheet *_targetThemeStylesheet;
    TSKAddedToDocumentContext *_dolcContext;
    TSURetainedPointerKeyDictionary *_styleMap;
    NSMutableArray *_mappingContext;
    BOOL _varyInThemeStylesheet;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceMatchStyle; // ivar: _forceMatchStyle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSSStylesheet *targetStylesheet;


-(id)_mappedStyleForStyle:(id)arg0 depth:(NSUInteger)arg1 ;
-(id)createStyleForStyle:(id)arg0 withPropertyMap:(id)arg1 ;
-(id)initWithTargetStylesheet:(id)arg0 newStyleDOLCContext:(id)arg1 ;
-(id)mappedStyleForStyle:(id)arg0 ;
-(id)mappedStyleForStyle:(id)arg0 inThemeStylesheet:(BOOL)arg1 ;
-(id)pCascadedFindExistingRootlessStyle:(id)arg0 propertyMap:(id)arg1 ;
-(id)pTargetParentForStyle:(id)arg0 withParentIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)popMappingContext:(id)arg0 ;
-(void)pushMappingContext:(id)arg0 ;
-(void)varyInThemeStylesheetForDurationOfBlock:(id)arg0 ;
-(void)varyInThemeStylesheetIf:(BOOL)arg0 forDurationOfBlock:(id)arg1 ;


@end


#endif