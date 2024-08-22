// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPACKAGEITEM_H
#define CKPACKAGEITEM_H

@class NSNumber, NSURL, NSString, NSData;

#import <Foundation/Foundation.h>


@interface CKPackageItem : NSObject

@property (copy, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (copy, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (nonatomic) NSUInteger itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *itemTypeHint; // ivar: _itemTypeHint
@property (nonatomic) NSInteger offset; // ivar: _offset
@property (nonatomic) NSInteger packageIndex; // ivar: _packageIndex
@property (nonatomic) int sectionIndex; // ivar: _sectionIndex
@property (copy, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic) NSInteger size; // ivar: _size
@property (copy, nonatomic) NSData *wrappedAssetKey; // ivar: _wrappedAssetKey


-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithDeviceID:(id)arg0 fileID:(id)arg1 generationID:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 ;


@end


#endif