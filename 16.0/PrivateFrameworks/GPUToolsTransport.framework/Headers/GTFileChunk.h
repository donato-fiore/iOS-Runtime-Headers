// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTFILECHUNK_H
#define GTFILECHUNK_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTFileChunk : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned int compressedLength; // ivar: _compressedLength
@property (nonatomic) unsigned int dataOffset; // ivar: _dataOffset
@property (nonatomic) unsigned int fileIndex; // ivar: _fileIndex
@property (nonatomic) NSUInteger fileOffset; // ivar: _fileOffset
@property (nonatomic) unsigned int length; // ivar: _length


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif