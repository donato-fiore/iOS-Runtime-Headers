// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDATATABLETEXTSOURCE_H
#define SXDATATABLETEXTSOURCE_H



#import "SXTextSource.h"
#import "SXFormattedText.h"

@interface SXDataTableTextSource : SXTextSource

@property (nonatomic) NSUInteger defaultTextAlignment; // ivar: _defaultTextAlignment
@property (readonly, nonatomic) SXFormattedText *formattedText; // ivar: _formattedText
@property (readonly, nonatomic) ? indexPath; // ivar: _indexPath


-(id)initWithFormattedText:(id)arg0 indexPath:(struct ? )arg1 smartFieldFactory:(id)arg2 dataSource:(id)arg3 documentLangaugeProvider:(id)arg4 fontAttributesConstructor:(id)arg5 ;
-(void)applyStylingOnTextTangierStorage:(id)arg0 ;


@end


#endif