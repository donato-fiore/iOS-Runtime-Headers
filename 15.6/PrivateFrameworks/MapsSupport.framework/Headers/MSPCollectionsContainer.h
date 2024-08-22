// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPCOLLECTIONSCONTAINER_H
#define MSPCOLLECTIONSCONTAINER_H



#import "MSPContainer.h"

@interface MSPCollectionsContainer : MSPContainer

@property (retain, nonatomic) MSPContainer *itemContainer; // ivar: _itemContainer


+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(id)initWithPersister:(id)arg0 itemContainer:(id)arg1 ;
-(id)queryWithDelegate:(id)arg0 ;


@end


#endif