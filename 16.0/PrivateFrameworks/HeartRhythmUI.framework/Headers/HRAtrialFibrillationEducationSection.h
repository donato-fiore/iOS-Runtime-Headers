// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRATRIALFIBRILLATIONEDUCATIONSECTION_H
#define HRATRIALFIBRILLATIONEDUCATIONSECTION_H

@class HKDataMetadataSection;



@interface HRAtrialFibrillationEducationSection : HKDataMetadataSection

@property (readonly, nonatomic) BOOL forSinglePlayer; // ivar: _forSinglePlayer


-(NSUInteger)numberOfRowsInSection;
-(id)_cellTitleForEducationRow:(NSUInteger)arg0 ;
-(id)_viewControllerForEducationRow:(NSUInteger)arg0 ;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initForSinglePlayer:(BOOL)arg0 ;
-(id)sectionTitle;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif