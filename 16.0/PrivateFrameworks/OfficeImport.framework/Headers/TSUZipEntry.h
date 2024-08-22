// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUZIPENTRY_H
#define TSUZIPENTRY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface TSUZipEntry : NSObject

@property (nonatomic) unsigned int CRC; // ivar: _CRC
@property (copy, nonatomic) NSString *collapsedName; // ivar: _collapsedName
@property (nonatomic, getter=isCompressed) BOOL compressed; // ivar: _compressed
@property (nonatomic) NSUInteger compressedSize; // ivar: _compressedSize
@property (nonatomic) unsigned short extraFieldsLength; // ivar: _extraFieldsLength
@property (nonatomic) NSUInteger fileHeaderLength; // ivar: _fileHeaderLength
@property (copy, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned short nameLength; // ivar: _nameLength
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (nonatomic) NSUInteger size; // ivar: _size


-(id)description;


@end


#endif