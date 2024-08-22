// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDLIST_H
#define WDLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "WDDocument.h"

@interface WDList : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLevelOverrides;
}


@property (readonly, nonatomic) int listDefinitionId; // ivar: mListDefinitionId
@property (readonly, nonatomic) int listId; // ivar: mListId


-(BOOL)isAnyListLevelOverridden;
-(NSUInteger)levelOverrideCount;
-(id)addLevelOverrideWithLevel:(unsigned char)arg0 ;
-(id)description;
-(id)initWithDocument:(id)arg0 listId:(int)arg1 listDefinitionId:(int)arg2 ;
-(id)levelOverrideAt:(NSUInteger)arg0 ;
-(id)levelOverrideForLevel:(unsigned char)arg0 ;
-(id)levelOverrides;
-(void)removeLevelOverride:(id)arg0 ;


@end


#endif