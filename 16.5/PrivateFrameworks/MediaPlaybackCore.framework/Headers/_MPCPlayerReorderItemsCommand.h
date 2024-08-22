// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCPLAYERREORDERITEMSCOMMAND_H
#define _MPCPLAYERREORDERITEMSCOMMAND_H

@class MPCPlayerCommand, NSString;
@protocol MPCPlayerReorderItemsCommand;



@interface _MPCPlayerReorderItemsCommand : MPCPlayerCommand <MPCPlayerReorderItemsCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canMoveItem:(id)arg0 ;
-(id)limitedDisplayIndexPathForMovingIndexPath:(id)arg0 toProprosedIndexPath:(id)arg1 ;
-(id)limitedIndexPathForMovingIndexPath:(id)arg0 toProprosedIndexPath:(id)arg1 ;
-(id)moveItem:(id)arg0 afterItem:(id)arg1 ;
-(id)moveItem:(id)arg0 beforeItem:(id)arg1 ;


@end


#endif