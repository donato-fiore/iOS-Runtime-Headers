// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSBLOCKACTION_H
#define MAPSSUGGESTIONSBLOCKACTION_H



#import "MapsSuggestionsBaseAction.h"

@interface MapsSuggestionsBlockAction : MapsSuggestionsBaseAction {
    id *_block;
}




-(id)initWithName:(id)arg0 block:(id)arg1 ;
-(void)actWithHandler:(id)arg0 ;


@end


#endif