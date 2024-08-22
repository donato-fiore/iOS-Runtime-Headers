// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDLISTTABLE_H
#define WDLISTTABLE_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "WDDocument.h"
#import "WDList.h"

@interface WDListTable : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLists;
    NSMutableDictionary *mListMapById;
    WDList *mNullList;
    WDList *mDefaultList;
}




-(NSUInteger)listCount;
-(id)addListWithListId:(int)arg0 listDefinitionId:(int)arg1 ;
-(id)description;
-(id)initWithDocument:(id)arg0 ;
-(id)listAt:(NSUInteger)arg0 ;
-(id)listWithListId:(int)arg0 ;
-(id)lists;


@end


#endif