// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDFONTTABLE_H
#define WDFONTTABLE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "OITSUNoCopyDictionary.h"

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}




-(NSUInteger)count;
-(NSUInteger)indexOfFont:(id)arg0 ;
-(id)createFontWithName:(id)arg0 ;
-(id)description;
-(id)fontAtIndex:(NSUInteger)arg0 ;
-(id)fontWithName:(id)arg0 ;
-(id)fontWithName:(id)arg0 create:(BOOL)arg1 ;
-(id)fonts;
-(id)init;
-(void)clear;


@end


#endif