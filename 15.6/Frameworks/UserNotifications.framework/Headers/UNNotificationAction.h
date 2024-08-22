// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNNOTIFICATIONACTION_H
#define UNNOTIFICATIONACTION_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UNNotificationActionIcon.h"

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) UNNotificationActionIcon *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *textInputButtonTitle; // ivar: _textInputButtonTitle
@property (readonly, copy, nonatomic) NSString *textInputPlaceholder; // ivar: _textInputPlaceholder
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 options:(NSUInteger)arg2 ;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 options:(NSUInteger)arg2 icon:(id)arg3 ;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 url:(id)arg2 ;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 url:(id)arg2 icon:(id)arg3 ;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 url:(id)arg2 options:(NSUInteger)arg3 ;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 url:(id)arg2 options:(NSUInteger)arg3 icon:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_description;
-(id)_initWithIdentifier:(id)arg0 title:(id)arg1 options:(NSUInteger)arg2 textInputButtonTitle:(id)arg3 textInputPlaceholder:(id)arg4 url:(id)arg5 icon:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif