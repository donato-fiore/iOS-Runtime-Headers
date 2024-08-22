// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXINSERTCOMPONENTLAYOUT_H
#define SXINSERTCOMPONENTLAYOUT_H

@class NSString;
@protocol SXComponentLayout, SXEdgeSpacing;

#import <Foundation/Foundation.h>

#import "SXJSONArray.h"

@interface SXInsertComponentLayout : NSObject <SXComponentLayout>



@property (readonly, nonatomic) _NSRange columnRange; // ivar: _columnRange
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) _SXComponentContentInset contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger horizontalContentAlignment; // ivar: _horizontalContentAlignment
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUInteger ignoreDocumentGutter; // ivar: _ignoreDocumentGutter
@property (nonatomic) NSUInteger ignoreDocumentMargin; // ivar: _ignoreDocumentMargin
@property (readonly, nonatomic) NSUInteger ignoreViewportPadding; // ivar: _ignoreViewportPadding
@property (retain, nonatomic) NSObject<SXEdgeSpacing> *margin; // ivar: _margin
@property (readonly, nonatomic) _SXConvertibleValue maximumContentWidth; // ivar: _maximumContentWidth
@property (readonly, nonatomic) _SXConvertibleValue maximumWidth;
@property (readonly, nonatomic) _SXConvertibleValue minimumHeight; // ivar: _minimumHeight
@property (readonly, nonatomic) _SXConvertibleValue minimumWidth;
@property (readonly, nonatomic) NSObject<SXEdgeSpacing> *padding; // ivar: _padding
@property (readonly, nonatomic) _SXConvertibleValue suggestedHeight; // ivar: _suggestedHeight
@property (readonly) Class superclass;


-(id)initWithColumnRange:(struct _NSRange )arg0 ;


@end


#endif