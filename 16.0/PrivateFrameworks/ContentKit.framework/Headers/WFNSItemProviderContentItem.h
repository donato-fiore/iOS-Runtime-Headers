// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFNSITEMPROVIDERCONTENTITEM_H
#define WFNSITEMPROVIDERCONTENTITEM_H

@class NSString, WFFileType, NSItemProvider;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFNSItemProviderContentItem : WFContentItem <WFContentItemClass>



@property (copy, nonatomic) NSString *contentName; // ivar: _contentName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFFileType *fileURLType; // ivar: _fileURLType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useNewLoadingAPI; // ivar: _useNewLoadingAPI


+(id)contentCategories;
+(id)countDescription;
+(id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)arg0 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)cachesSupportedTypes;
-(id)name;
-(id)outputTypes;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateFileRepresentationWithNewAPI:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
// -(void)generateObjectRepresentationWithNewAPI:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)preloadImportantItemsWithCompletionHandler:(id)arg0 ;


@end


#endif