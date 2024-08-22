// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSVISIBILITYITEM_H
#define BCSVISIBILITYITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCSVisibilityItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) CGFloat ratio; // ivar: _ratio


+(BOOL)supportsSecureCoding;
-(BOOL)isVisibleForDSID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 country:(id)arg1 ratio:(CGFloat)arg2 ;
-(id)initWithVisibility:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif