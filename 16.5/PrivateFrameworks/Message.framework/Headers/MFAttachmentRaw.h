// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTRAW_H
#define MFATTACHMENTRAW_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MFAttachmentRaw : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType


+(BOOL)supportsSecureCoding;
+(id)attachmentData:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 ;
+(id)attachmentData:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif