// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNARCHIVEDSLIDECOLLECTIONSELECTION_H
#define KNARCHIVEDSLIDECOLLECTIONSELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;


#import "KNSlideCollectionSelection.h"

@interface KNArchivedSlideCollectionSelection : TSPObject <TSKArchivedSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKSelection *selection; // ivar: _selection
@property (readonly, nonatomic) KNSlideCollectionSelection *slideCollectionSelection;
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif