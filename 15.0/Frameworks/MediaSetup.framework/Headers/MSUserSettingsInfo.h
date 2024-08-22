// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSUSERSETTINGSINFO_H
#define MSUSERSETTINGSINFO_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MSUserSettingsInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *primaryUserIdentifier; // ivar: _primaryUserIdentifier
@property (nonatomic) NSUInteger primaryUserSelectionType; // ivar: _primaryUserSelectionType


+(BOOL)supportsSecureCoding;
+(id)settingFromData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif