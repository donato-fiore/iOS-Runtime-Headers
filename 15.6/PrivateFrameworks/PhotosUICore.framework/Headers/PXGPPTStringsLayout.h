// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGPPTSTRINGSLAYOUT_H
#define PXGPPTSTRINGSLAYOUT_H

@class NSDictionary, NSString, NSArray;
@protocol PXGStringSource;


#import "PXGGridLayout.h"

@interface PXGPPTStringsLayout : PXGGridLayout <PXGStringSource>



@property (copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *strings; // ivar: _strings
@property (readonly) Class superclass;


-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)initWithStringCount:(NSUInteger)arg0 localeCodes:(id)arg1 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;


@end


#endif