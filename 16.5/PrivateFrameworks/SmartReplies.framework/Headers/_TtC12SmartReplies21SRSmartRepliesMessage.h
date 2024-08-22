// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SMARTREPLIES21SRSMARTREPLIESMESSAGE_H
#define _TTC12SMARTREPLIES21SRSMARTREPLIESMESSAGE_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies21SRSmartRepliesMessage : NSObject <NSSecureCoding, NSCopying>

 {
    ? title;
    ? senderIdentifier;
    ? summary;
    ? dateSent;
}


@property (nonatomic, copy) NSDate *dateSent;
@property (nonatomic) BOOL isEmote; // ivar: isEmote
@property (nonatomic) BOOL isRead; // ivar: isRead
@property (nonatomic) BOOL isTapBack; // ivar: isTapBack
@property (nonatomic, copy) NSString *senderIdentifier;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif