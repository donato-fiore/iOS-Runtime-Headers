// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUACTIVITYITEMPROVIDER_H
#define SUACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider, UIActivity, UIImage;
@protocol SUActivityItemProviderDelegate, OS_dispatch_queue;



@interface SUActivityItemProvider : UIActivityItemProvider {
    UIActivity *_activity;
    id<SUActivityItemProviderDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id *_lastProvidedItem;
    UIImage *_previewImage;
}


@property (weak) NSObject<SUActivityItemProviderDelegate> *delegate;
@property (retain, setter=setSUActivity:) UIActivity *suActivity;
@property (readonly) id *suLastProvidedItem;
@property (retain, setter=setSUPreviewImage:) UIImage *suPreviewImage;


-(id)initWithPlaceholderItem:(id)arg0 ;
-(id)item;
-(void)dealloc;


@end


#endif