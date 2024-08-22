// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSHARINGPROFILEAVATARITEM_H
#define CNSHARINGPROFILEAVATARITEM_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface CNSharingProfileAvatarItem : NSObject

@property (readonly, copy, nonatomic) id *imageProvider; // ivar: _imageProvider
@property (nonatomic) NSData *memojiMetadata; // ivar: _memojiMetadata
@property (readonly, copy, nonatomic) id *originalImageProvider; // ivar: _originalImageProvider
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *variantIdentifier; // ivar: _variantIdentifier
@property (nonatomic) BOOL wasSetFromFullPhotoPicker; // ivar: _wasSetFromFullPhotoPicker


// -(id)initWithImageProvider:(id)arg0 originalImageProvider:(unk)arg1 type:(id)arg2  ;
// -(id)initWithImageProvider:(id)arg0 type:(unk)arg1  ;


@end


#endif