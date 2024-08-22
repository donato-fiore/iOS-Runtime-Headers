// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDOM_H
#define SXDOM_H

@class NSDictionary;
@protocol NSCopying, NSMutableCopying, SXAutoPlacement, SXDocumentStyle;

#import <Foundation/Foundation.h>

#import "SXDOMAnalysis.h"
#import "SXComponents.h"
#import "SXMetadata.h"

@interface SXDOM : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) SXDOMAnalysis *analysis; // ivar: _analysis
@property (readonly, nonatomic) NSObject<SXAutoPlacement> *autoPlacement; // ivar: _autoPlacement
@property (readonly, copy, nonatomic) NSDictionary *componentLayouts; // ivar: _componentLayouts
@property (readonly, copy, nonatomic) NSDictionary *componentStyles; // ivar: _componentStyles
@property (readonly, copy, nonatomic) NSDictionary *componentTextStyles; // ivar: _componentTextStyles
@property (readonly, copy, nonatomic) SXComponents *components; // ivar: _components
@property (readonly, nonatomic) NSObject<SXDocumentStyle> *documentStyle; // ivar: _documentStyle
@property (readonly, nonatomic) SXMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSDictionary *resources; // ivar: _resources
@property (readonly, copy, nonatomic) NSDictionary *textStyles; // ivar: _textStyles


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithComponents:(id)arg0 componentLayouts:(id)arg1 componentStyles:(id)arg2 componentTextStyles:(id)arg3 textStyles:(id)arg4 resources:(id)arg5 autoPlacement:(id)arg6 documentStyle:(id)arg7 analysis:(id)arg8 metadata:(id)arg9 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif