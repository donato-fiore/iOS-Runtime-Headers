// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSTICKER_H
#define IMSTICKER_H

@class NSString, NSDictionary, NSURL, NSData;

#import <Foundation/Foundation.h>


@interface IMSticker : NSObject

@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (copy, nonatomic) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (copy, nonatomic) NSString *ballonBundleID; // ivar: _ballonBundleID
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *moodCategory; // ivar: _moodCategory
@property (retain, nonatomic) NSData *recipe; // ivar: _recipe
@property (readonly, copy, nonatomic) NSString *stickerGUID; // ivar: _stickerGUID
@property (copy, nonatomic) NSString *stickerName; // ivar: _stickerName
@property (readonly, copy, nonatomic) NSString *stickerPackGUID; // ivar: _stickerPackGUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithStickerID:(id)arg0 stickerPackID:(id)arg1 fileURL:(id)arg2 accessibilityLabel:(id)arg3 moodCategory:(id)arg4 stickerName:(id)arg5 ;
-(id)initWithStickerPropertyDictionary:(id)arg0 stickerPackID:(id)arg1 stickerPackBundlePath:(id)arg2 ;
-(void)dealloc;


@end


#endif