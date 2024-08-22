// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPARASSET_H
#define _BLASTDOORLPARASSET_H

@class NSURL, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_BlastDoorLPARAssetProperties.h"

@interface _BlastDoorLPARAsset : NSObject <NSSecureCoding>

 {
    NSURL *_temporaryFileURL;
}


@property (copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) _BlastDoorLPARAssetProperties *properties; // ivar: _properties


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldEncodeData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_encodedSize;
-(id)_initWithARAsset:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif