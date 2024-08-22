// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCITATIONTABLE_H
#define WDCITATIONTABLE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "WDDocument.h"

@interface WDCitationTable : NSObject {
    NSMutableDictionary *mCitations;
}


@property (readonly, weak) WDDocument *document; // ivar: mDocument


-(NSUInteger)count;
-(id)citationFor:(id)arg0 ;
-(id)citationIDs;
-(id)description;
-(id)initWithDocument:(id)arg0 ;
-(void)addCitation:(id)arg0 forID:(id)arg1 ;


@end


#endif