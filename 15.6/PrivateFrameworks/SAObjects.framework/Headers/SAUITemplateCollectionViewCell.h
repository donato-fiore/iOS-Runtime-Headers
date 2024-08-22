// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUITEMPLATECOLLECTIONVIEWCELL_H
#define SAUITEMPLATECOLLECTIONVIEWCELL_H

@class NSString, NSArray;
@protocol SAUITemplateMonogrammable;


#import "SAUITemplateBaseItem.h"

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem <SAUITemplateMonogrammable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *monogramName;
@property (nonatomic) BOOL sizeToFitImage;
@property (copy, nonatomic) NSString *subtitleText;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *themeImages;
@property (copy, nonatomic) NSString *titleText;


+(id)collectionViewCell;
+(id)collectionViewCellWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif