// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUITEMPLATECOLLECTIONVIEW_H
#define SAUITEMPLATECOLLECTIONVIEW_H

@class NSArray;


#import "SAUITemplateBaseItem.h"

@interface SAUITemplateCollectionView : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *cells;


+(id)collectionView;
+(id)collectionViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif