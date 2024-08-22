// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT18MFSNAPSHOTPROVIDER_H
#define _TTC16MAGNIFIERSUPPORT18MFSNAPSHOTPROVIDER_H

@class UIActivityItemProvider;



@interface _TtC16MagnifierSupport18MFSnapshotProvider : UIActivityItemProvider {
    ? title;
    ? url;
    ? image;
}


@property (nonatomic, readonly) id *item;


-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithPlaceholderItem:(id)arg0 ;


@end


#endif