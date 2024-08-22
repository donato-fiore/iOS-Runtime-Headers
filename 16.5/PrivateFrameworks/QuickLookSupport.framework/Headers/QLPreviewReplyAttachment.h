// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWREPLYATTACHMENT_H
#define QLPREVIEWREPLYATTACHMENT_H

@class UTType, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLPreviewReplyAttachment : NSObject <NSSecureCoding>



@property (retain) UTType *contentType; // ivar: _contentType
@property (retain) NSData *data; // ivar: _data


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif