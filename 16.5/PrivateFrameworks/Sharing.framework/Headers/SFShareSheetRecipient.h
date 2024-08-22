// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSHARESHEETRECIPIENT_H
#define SFSHARESHEETRECIPIENT_H

@class NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFShareSheetRecipient : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSSet *formattedHandles; // ivar: _formattedHandles
@property (readonly, nonatomic) NSString *realName; // ivar: _realName


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNode:(id)arg0 ;
-(id)initWithRealName:(id)arg0 displayName:(id)arg1 formattedHandles:(id)arg2 contactIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif