// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXMUTABLEDOM_H
#define SXMUTABLEDOM_H

@class NSMutableDictionary;
@protocol SXAutoPlacement, SXDocumentStyle;


#import "SXDOM.h"
#import "SXMutableDOMAnalysis.h"
#import "SXMutableComponents.h"
#import "SXMetadata.h"

@interface SXMutableDOM : SXDOM

@property (copy, nonatomic) SXMutableDOMAnalysis *analysis;
@property (retain, nonatomic) NSObject<SXAutoPlacement> *autoPlacement;
@property (readonly, copy, nonatomic) NSMutableDictionary *componentLayouts;
@property (readonly, copy, nonatomic) NSMutableDictionary *componentStyles;
@property (readonly, copy, nonatomic) NSMutableDictionary *componentTextStyles;
@property (readonly, copy, nonatomic) SXMutableComponents *components;
@property (retain, nonatomic) NSObject<SXDocumentStyle> *documentStyle;
@property (readonly, copy, nonatomic) SXMetadata *metadata;
@property (readonly, copy, nonatomic) NSMutableDictionary *resources;
@property (readonly, copy, nonatomic) NSMutableDictionary *textStyles;


-(id)initWithComponents:(id)arg0 componentLayouts:(id)arg1 componentStyles:(id)arg2 componentTextStyles:(id)arg3 textStyles:(id)arg4 resources:(id)arg5 autoPlacement:(id)arg6 documentStyle:(id)arg7 analysis:(id)arg8 metadata:(id)arg9 ;


@end


#endif