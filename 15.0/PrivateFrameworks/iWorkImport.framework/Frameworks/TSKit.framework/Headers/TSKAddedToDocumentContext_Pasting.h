// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKADDEDTODOCUMENTCONTEXT_PASTING_H
#define TSKADDEDTODOCUMENTCONTEXT_PASTING_H

@class NSMutableArray;
@protocol TSKMultiTableRemapping;


#import "TSKAddedToDocumentContext.h"

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
    id<TSKMultiTableRemapping> *mMultiTableRemapper;
}




-(BOOL)autoUpdateSmartFields;
-(BOOL)syncChanges;
-(BOOL)uniqueBookmarks;
-(BOOL)wasPasted;
-(id)addedDrawables;
-(id)description;
-(id)multiTableRemapper;
-(void)addDrawable:(id)arg0 ;
-(void)addDrawables:(id)arg0 ;
-(void)setMultiTableRemapper:(id)arg0 ;


@end


#endif