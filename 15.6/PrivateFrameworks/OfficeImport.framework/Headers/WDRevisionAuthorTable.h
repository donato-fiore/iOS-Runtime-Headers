// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDREVISIONAUTHORTABLE_H
#define WDREVISIONAUTHORTABLE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "WDDocument.h"

@interface WDRevisionAuthorTable : NSObject {
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}




-(NSUInteger)authorAddLookup:(id)arg0 ;
-(NSUInteger)authorCount;
-(id)authorAt:(NSUInteger)arg0 ;
-(id)authors;
-(id)description;
-(id)initWithDocument:(id)arg0 ;
-(void)addAuthor:(id)arg0 ;


@end


#endif