// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEVERNOTECONTENTITEM_H
#define WFEVERNOTECONTENTITEM_H

@class WFContentItem, NSString;
@protocol WFContentItemClass;


#import "ENNoteRef.h"

@interface WFEvernoteContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ENNoteRef *noteRef;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)itemWithNoteRef:(id)arg0 note:(id)arg1 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
+(void)createNoteWithContent:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)canEncodeWithCoder:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)name;
-(id)preferredFileType;
// -(void)generateFileRepresentations:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif