// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTIMAGECOLLECTIONITEM_H
#define SASTIMAGECOLLECTIONITEM_H

@class NSString, NSArray;
@protocol SASTTemplateItem;


#import "AceObject.h"

@interface SASTImageCollectionItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *images;
@property (readonly) Class superclass;


+(id)imageCollectionItem;
+(id)imageCollectionItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif