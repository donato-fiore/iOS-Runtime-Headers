// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSLIDESHOWMEDIAITEM_H
#define PUSLIDESHOWMEDIAITEM_H

@class MPMediaItem, OKProducerPreset, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface PUSlideshowMediaItem : NSObject {
    MPMediaItem *_mediaItem;
    OKProducerPreset *_preset;
}


@property (readonly, nonatomic) NSURL *audioURL;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(id)mediaItemForType:(NSInteger)arg0 uniqueIdentifier:(id)arg1 ;
+(id)mediaItemsForOKThemes;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWitMediaItem:(id)arg0 ;
-(id)initWitPreset:(id)arg0 ;


@end


#endif