// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INRELEVANTSHORTCUTSTORE_H
#define INRELEVANTSHORTCUTSTORE_H

@class CSSearchableIndex;

#import <Foundation/Foundation.h>


@interface INRelevantShortcutStore : NSObject

@property (readonly, nonatomic) CSSearchableIndex *index; // ivar: _index


+(id)defaultStore;
-(id)initWithSearchableIndex:(id)arg0 ;
-(void)setRelevantShortcuts:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif