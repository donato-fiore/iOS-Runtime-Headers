// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPBASEMEDIAITEM_H
#define TVPBASEMEDIAITEM_H

@class NSMutableDictionary, NSString;
@protocol TVPMediaItem;

#import <Foundation/Foundation.h>


@interface TVPBaseMediaItem : NSObject <TVPMediaItem>

 {
    NSMutableDictionary *_metadataDictionary;
    NSMutableDictionary *_transactionDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasTrait:(id)arg0 ;
-(BOOL)isEqualToMediaItem:(id)arg0 ;
-(id)init;
-(id)mediaItemMetadataForProperty:(id)arg0 ;
-(id)mediaItemURL;
-(id)reportingDelegate;
-(void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg0 ;
-(void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg0 ;
-(void)_setMetadata:(id)arg0 forProperty:(id)arg1 postNotification:(BOOL)arg2 ;
-(void)performMediaItemMetadataTransactionWithBlock:(id)arg0 ;
-(void)removeMediaItemMetadataForProperty:(id)arg0 ;
-(void)setMediaItemMetadata:(id)arg0 forProperty:(id)arg1 ;
-(void)updateBookmarkWithSuggestedTime:(CGFloat)arg0 forElapsedTime:(CGFloat)arg1 duration:(CGFloat)arg2 playbackOfMediaItemIsEnding:(BOOL)arg3 ;
-(void)updatePlayCountForElapsedTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif