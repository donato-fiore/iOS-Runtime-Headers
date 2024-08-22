// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL33NOTESMETADATAACTIVITYITEMPROVIDER_H
#define _TTC19APPSTOREKITINTERNAL33NOTESMETADATAACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider;



@interface _TtC19AppStoreKitInternal33NotesMetadataActivityItemProvider : UIActivityItemProvider {
    ? metadata;
    ? $__lazy_storage_$_notesMetadata;
}


@property (nonatomic, readonly) id *item;


-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg0 ;


@end


#endif