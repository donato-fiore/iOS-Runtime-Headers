// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXJSONDOCUMENTLAYOUT_H
#define SXJSONDOCUMENTLAYOUT_H

@class NSString;
@protocol SXDocumentLayout;


#import "SXJSONObject.h"

@interface SXJSONDocumentLayout : SXJSONObject <SXDocumentLayout>



@property (readonly, nonatomic) NSUInteger columns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger gutter;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger margin;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger width;


-(NSInteger)gutterWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif