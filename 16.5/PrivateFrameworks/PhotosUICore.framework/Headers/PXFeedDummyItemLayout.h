// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDDUMMYITEMLAYOUT_H
#define PXFEEDDUMMYITEMLAYOUT_H

@class NSString;
@protocol PXGSolidColorSource, PXGStringSource;


#import "PXGLayout.h"

@interface PXFeedDummyItemLayout : PXGLayout <PXGSolidColorSource, PXGStringSource>

 {
    ? _updateFlags;
    unsigned int _backgroundSpriteIndex;
    unsigned int _textSpriteIndex;
    unsigned short _contentVersion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *representedObject; // ivar: _representedObject
@property (readonly) Class superclass;


-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateContent;
-(void)_invalidateContentVersion;
-(void)_updateContent;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;


@end


#endif