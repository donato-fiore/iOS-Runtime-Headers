// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRUIFSIRISESSIONINFO_H
#define SRUIFSIRISESSIONINFO_H

@class AFAccount, NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SRUIFSiriSessionInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) AFAccount *activeAccount; // ivar: _activeAccount
@property (copy, nonatomic) NSString *assistantVersion; // ivar: _assistantVersion
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSNumber *userAccountCount; // ivar: _userAccountCount


+(BOOL)supportsSecureCoding;
-(BOOL)applyInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)_setPropertyValue:(id)arg0 withSelector:(SEL)arg1 ;
-(id)_strippedInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif