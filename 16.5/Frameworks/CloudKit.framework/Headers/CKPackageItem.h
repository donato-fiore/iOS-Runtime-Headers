// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPACKAGEITEM_H
#define CKPACKAGEITEM_H

@class NSNumber, NSURL, NSString, NSData;

#import <Foundation/Foundation.h>


@interface CKPackageItem : NSObject

@property (copy) NSNumber *deviceID; // ivar: _deviceID
@property (copy) NSNumber *fileID; // ivar: _fileID
@property (copy) NSURL *fileURL; // ivar: _fileURL
@property (copy) NSNumber *generationID; // ivar: _generationID
@property NSUInteger itemID; // ivar: _itemID
@property (copy) NSString *itemTypeHint; // ivar: _itemTypeHint
@property NSInteger offset; // ivar: _offset
@property NSInteger packageIndex; // ivar: _packageIndex
@property int sectionIndex; // ivar: _sectionIndex
@property (copy) NSData *signature; // ivar: _signature
@property NSInteger size; // ivar: _size
@property (copy) NSData *wrappedAssetKey; // ivar: _wrappedAssetKey


-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithDeviceID:(id)arg0 fileID:(id)arg1 generationID:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 ;


@end


#endif