// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSTICKERPACK_H
#define IMSTICKERPACK_H

@class NSMutableSet, NSString, NSURL, NSSet;

#import <Foundation/Foundation.h>


@interface IMStickerPack : NSObject {
    NSMutableSet *_stickers;
}


@property (copy, nonatomic) NSString *GUID; // ivar: _GUID
@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (copy, nonatomic) NSURL *displayAssetURL; // ivar: _displayAssetURL
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSSet *stickers;


-(id)_generatePackGUIDWithPackID:(id)arg0 appBundleID:(id)arg1 appVersion:(id)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithGUID:(id)arg0 name:(id)arg1 displayAssetURL:(id)arg2 fileURL:(id)arg3 appBundleIdentifier:(id)arg4 appVersion:(id)arg5 ;
-(id)initWithStickerPackProperties:(id)arg0 stickerPackBundleURL:(id)arg1 appBundleIdentifier:(id)arg2 appVersion:(id)arg3 ;
-(void)addSticker:(id)arg0 ;
-(void)dealloc;


@end


#endif