// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWINDOWCONTENTITEM_H
#define WFWINDOWCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFWindow.h"

@interface WFWindowContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFWindow *window;


+(BOOL)hasLibrary;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif