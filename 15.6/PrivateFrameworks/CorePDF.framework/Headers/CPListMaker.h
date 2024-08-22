// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLISTMAKER_H
#define CPLISTMAKER_H

@class NSArray;
@protocol CPDisposable;

#import <Foundation/Foundation.h>

#import "CPLayoutArea.h"
#import "CPList.h"

@interface CPListMaker : NSObject <CPDisposable>

 {
    CPLayoutArea *area;
    NSArray *spacers;
    unsigned int textLineCount;
    *id textLines;
    CPList *list;
}




+(void)makeListsInChunk:(id)arg0 ;
+(void)makeListsInLayoutArea:(id)arg0 ;
+(void)makeListsInPage:(id)arg0 ;
-(?)makeListFrom;
-(id)initWithLayoutArea:(id)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)fetchTextLine:(id)arg0 ;
-(void)fetchTextLinesInColumn:(id)arg0 ;
-(void)finalize;
-(void)makeListItemFrom:(struct CPListInfo *)arg0 stopAt:(unsigned int)arg1 ;
-(void)makeLists;
-(void)makeListsInColumn:(id)arg0 ;


@end


#endif