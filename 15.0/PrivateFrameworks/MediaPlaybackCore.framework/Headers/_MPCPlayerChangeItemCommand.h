// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYERCHANGEITEMCOMMAND_H
#define _MPCPLAYERCHANGEITEMCOMMAND_H

@class MPCPlayerCommand, NSString;
@protocol MPCPlayerChangeItemCommand;



@interface _MPCPlayerChangeItemCommand : MPCPlayerCommand <MPCPlayerChangeItemCommand>



@property (readonly, nonatomic) NSUInteger changeItemSupport; // ivar: _changeItemSupport
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)changeToItem:(id)arg0 ;
-(id)changeToSection:(id)arg0 ;
-(id)initWithResponse:(id)arg0 changeItemSupport:(NSUInteger)arg1 ;
-(id)nextChapter;
-(id)nextItem;
-(id)nextSection;
-(id)previousChapter;
-(id)previousItem;
-(id)previousItemDeferringToPlaybackQueuePosition;
-(id)previousSection;


@end


#endif