// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKADDEDTODOCUMENTCONTEXT_PASTING_H
#define TSKADDEDTODOCUMENTCONTEXT_PASTING_H



#import "TSKAddedToDocumentContext.h"

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    *__CFDictionary mTableIDMap;
}




-(BOOL)autoUpdateSmartFields;
-(BOOL)syncChanges;
-(BOOL)uniqueBookmarks;
-(BOOL)wasPasted;
-(id)description;
-(id)init;
-(struct __CFDictionary *)tableIDMap;
-(void)dealloc;
-(void)setTableIDMap:(struct __CFDictionary *)arg0 ;


@end


#endif