// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIAENTITYFETCHRESPONSECHANGES_H
#define VUIMEDIAENTITYFETCHRESPONSECHANGES_H

@class VUICollectionChangeSet;

#import <Foundation/Foundation.h>


@interface VUIMediaEntityFetchResponseChanges : NSObject

@property (retain, nonatomic) VUICollectionChangeSet *groupingChangeSet; // ivar: _groupingChangeSet
@property (retain, nonatomic) VUICollectionChangeSet *mediaEntitiesChangeSet; // ivar: _mediaEntitiesChangeSet


-(id)description;
-(id)init;
-(id)initWithMediaEntitiesChangeSet:(id)arg0 ;


@end


#endif