// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPCLIPMEDIAITEM_H
#define TVPCLIPMEDIAITEM_H

@class NSMutableDictionary, NSSet;
@protocol TVPMediaItem;

#import <Foundation/Foundation.h>


@interface TVPClipMediaItem : NSObject

@property (retain, nonatomic) NSMutableDictionary *localMetadata; // ivar: _localMetadata
@property (retain, nonatomic) NSSet *localMetadataKeys; // ivar: _localMetadataKeys
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // ivar: _mediaItem


-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)hasTrait:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithMediaItem:(id)arg0 clipTimeRange:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_mediaItemMetadataWillOrDidChange:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif