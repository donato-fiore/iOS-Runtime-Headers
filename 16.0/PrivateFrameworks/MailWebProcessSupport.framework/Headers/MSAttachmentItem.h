// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSATTACHMENTITEM_H
#define MSATTACHMENTITEM_H

@class NSString, NSData, UTType;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSAttachmentItem : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *additionalMarkup; // ivar: _additionalMarkup
@property (readonly, copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) UTType *uttype; // ivar: _uttype


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentID:(id)arg0 uttype:(id)arg1 data:(id)arg2 additionalMarkup:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif