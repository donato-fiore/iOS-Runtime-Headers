// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMAPSTRANSITMESSAGE_H
#define PKMAPSTRANSITMESSAGE_H

@class NSURL, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKMapsTransitMessage : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (readonly, nonatomic) NSInteger iconType; // ivar: _iconType
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *localizedActionTitle; // ivar: _localizedActionTitle
@property (readonly, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (nonatomic) NSInteger maxNotificationCount; // ivar: _maxNotificationCount
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 message:(id)arg1 actionTitle:(id)arg2 actionURL:(id)arg3 iconType:(NSInteger)arg4 userInfo:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif