// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPIMAGE_H
#define _BLASTDOORLPIMAGE_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_BlastDoorLPImageProperties.h"

@interface _BlastDoorLPImage : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) _BlastDoorLPImageProperties *properties; // ivar: _properties


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldEncodeData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_encodedSize;
-(NSUInteger)hash;
-(id)_initWithImage:(id)arg0 ;
-(id)_initWithImage:(id)arg0 properties:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif