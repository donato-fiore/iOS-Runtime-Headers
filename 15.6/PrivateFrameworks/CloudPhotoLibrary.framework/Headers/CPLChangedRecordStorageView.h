// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLCHANGEDRECORDSTORAGEVIEW_H
#define CPLCHANGEDRECORDSTORAGEVIEW_H



#import "CPLRecordStorageView.h"
#import "CPLChangeStorage.h"

@interface CPLChangedRecordStorageView : CPLRecordStorageView

@property (readonly, nonatomic) CPLRecordStorageView *baseStorageView; // ivar: _baseStorageView
@property (readonly, nonatomic) CPLChangeStorage *changeStorage; // ivar: _changeStorage


-(BOOL)hasRecordWithScopedIdentifier:(id)arg0 ;
-(NSUInteger)countOfRecordsWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)description;
-(id)initWithChangeStorage:(id)arg0 overStorageView:(id)arg1 ;
-(id)recordViewWithScopedIdentifier:(id)arg0 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg0 ;
-(id)resourceOfType:(NSUInteger)arg0 forRecordWithScopedIdentifier:(id)arg1 recordClass:(*Class)arg2 error:(*id)arg3 ;


@end


#endif