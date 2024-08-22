// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDRECOGNITIONGROUP_H
#define CUINAMEDRECOGNITIONGROUP_H

@class NSMutableDictionary;


#import "CUINamedLookup.h"

@interface CUINamedRecognitionGroup : CUINamedLookup {
    NSMutableDictionary *_imageContents;
    NSMutableDictionary *_objectContents;
}




-(id)initWithName:(id)arg0 contentsFromCatalog:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(NSUInteger)arg3 ;
-(id)namedRecognitionImageImageList;
-(id)namedRecognitionItemList;
-(id)namedRecognitionObjectObjectList;
-(id)recognitionImageWithName:(id)arg0 ;
-(id)recognitionItemsWithName:(id)arg0 ;
-(id)recognitionObjectWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif