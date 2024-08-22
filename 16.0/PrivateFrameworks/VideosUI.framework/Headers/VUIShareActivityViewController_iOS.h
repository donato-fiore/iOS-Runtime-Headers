// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISHAREACTIVITYVIEWCONTROLLER_IOS_H
#define VUISHAREACTIVITYVIEWCONTROLLER_IOS_H

@class UIActivityViewController, LPMetadataProvider, NSURL, NSString;



@interface VUIShareActivityViewController_iOS : UIActivityViewController {
    LPMetadataProvider *_pendingMessageMetadataProvider;
    NSURL *_sharingURL;
}


@property (retain, nonatomic) NSURL *itemImageURL; // ivar: _itemImageURL
@property (retain, nonatomic) NSString *itemSubtitle; // ivar: _itemSubtitle
@property (retain, nonatomic) NSString *itemTitle; // ivar: _itemTitle


+(void)shareMediaItem:(id)arg0 title:(id)arg1 subtitle:(id)arg2 imageURLStr:(id)arg3 groupActivityMetadata:(id)arg4 sourceView:(id)arg5 ;
+(void)shareMediaItem:(id)arg0 title:(id)arg1 subtitle:(id)arg2 imageURLStr:(id)arg3 sharedWatchId:(id)arg4 sharedWatchUrl:(id)arg5 sourceView:(id)arg6 ;
+(void)shareMediaWithShareSheet:(id)arg0 ;
-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 ;
-(void)_prepareActivity:(id)arg0 completion:(id)arg1 ;


@end


#endif