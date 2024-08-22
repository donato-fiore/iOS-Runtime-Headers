// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFNOTIFICATIONINFO_H
#define SFNOTIFICATIONINFO_H

@class NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFNotificationInfo.h"
#import "SFNotificationError.h"

@interface SFNotificationInfo : NSObject <NSSecureCoding, NSCopying>

 {
    SFNotificationInfo *_cachedMediumBubbleVersion;
}


@property (retain, nonatomic) NSURL *attachmentURL; // ivar: _attachmentURL
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) unsigned char deviceClass; // ivar: _deviceClass
@property (retain, nonatomic) SFNotificationError *error; // ivar: _error
@property (retain, nonatomic) NSString *header; // ivar: _header
@property (nonatomic) NSUInteger homePodType; // ivar: _homePodType
@property (nonatomic) unsigned char interactionBehavior; // ivar: _interactionBehavior
@property (nonatomic) unsigned char interactionDirection; // ivar: _interactionDirection
@property (readonly, nonatomic) SFNotificationInfo *mediumBubbleVersion;
@property (nonatomic) unsigned int notificationType; // ivar: _notificationType
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif