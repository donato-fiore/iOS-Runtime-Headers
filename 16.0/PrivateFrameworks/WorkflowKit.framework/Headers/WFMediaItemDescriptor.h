// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMEDIAITEMDESCRIPTOR_H
#define WFMEDIAITEMDESCRIPTOR_H

@class NSString, NSDictionary, NSNumber, NSData;
@protocol NSSecureCoding, MTLJSONSerializing;


#import "MTLModel.h"

@interface WFMediaItemDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (readonly, copy, nonatomic) NSNumber *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly, copy, nonatomic) NSData *playbackArchiveData; // ivar: _playbackArchiveData
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)allDescriptorsForMediaTypeUsingMPMediaQuery:(id)arg0 ;
+(id)allDescriptorsInLibraryForMediaType:(id)arg0 ;
+(id)collectionForPlaybackWithItemName:(id)arg0 persistentIdentifier:(id)arg1 mediaType:(id)arg2 ;
+(id)collectionsOrItemsFromQuery:(id)arg0 forMediaType:(id)arg1 ;
+(id)descriptorForMPMediaEntity:(id)arg0 mediaType:(id)arg1 ;
+(id)descriptorWithPersistentIdentifier:(id)arg0 mediaType:(id)arg1 ;
+(id)itemCollectionFromQuery:(id)arg0 mediaType:(id)arg1 ;
+(id)mpMediaQueryForName:(id)arg0 withMediaType:(id)arg1 ;
+(id)mpMediaQueryForPersistentIdentifier:(id)arg0 withMediaType:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)collectionForPlayback;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMediaItemName:(id)arg0 persistentIdentifier:(id)arg1 mediaType:(id)arg2 ;
-(id)initWithMediaItemName:(id)arg0 playbackArchiveData:(id)arg1 ;


@end


#endif