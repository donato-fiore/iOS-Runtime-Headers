// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDATADETECTORVIEW_H
#define PKDATADETECTORVIEW_H

@class NSArray, NSDictionary;


#import "PKDetectionView.h"
#import "PKDataDetectorItem.h"

@interface PKDataDetectorView : PKDetectionView

@property (copy, nonatomic) NSArray *allItems; // ivar: _allItems
@property (retain, nonatomic) NSDictionary *dataDetectorContext; // ivar: _dataDetectorContext
@property (retain, nonatomic) PKDataDetectorItem *dataDetectorItem; // ivar: _dataDetectorItem


-(CGFloat)_underlineThickness;
-(id)accessibilityIdentifier;
-(id)accessibilityValue;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithDataDetectorItem:(id)arg0 allItems:(id)arg1 ;
-(id)item;
-(void)_highlightWithCompletion:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)tapHandler:(id)arg0 ;


@end


#endif