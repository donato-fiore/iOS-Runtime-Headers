// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTLAYOUT_H
#define SXCOMPONENTLAYOUT_H

@class NSString;
@protocol SXComponentLayout, SXEdgeSpacing;


#import "SXJSONObject.h"
#import "SXJSONArray.h"

@interface SXComponentLayout : SXJSONObject <SXComponentLayout>



@property (readonly, nonatomic) _NSRange columnRange;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) _SXComponentContentInset contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger horizontalContentAlignment;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUInteger ignoreDocumentGutter;
@property (readonly, nonatomic) NSUInteger ignoreDocumentMargin;
@property (readonly, nonatomic) NSUInteger ignoreViewportPadding;
@property (readonly, nonatomic) NSObject<SXEdgeSpacing> *margin;
@property (readonly, nonatomic) _SXConvertibleValue maximumContentWidth;
@property (readonly, nonatomic) _SXConvertibleValue maximumWidth;
@property (readonly, nonatomic) _SXConvertibleValue minimumHeight;
@property (readonly, nonatomic) _SXConvertibleValue minimumWidth;
@property (readonly, nonatomic) NSObject<SXEdgeSpacing> *padding;
@property (readonly, nonatomic) _SXConvertibleValue suggestedHeight;
@property (readonly) Class superclass;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;
+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(NSUInteger)horizontalContentAlignmentWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)ignoreDocumentGutterWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)ignoreDocumentMarginWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)ignoreViewportPaddingWithValue:(id)arg0 withType:(int)arg1 ;
-(id)paddingWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif