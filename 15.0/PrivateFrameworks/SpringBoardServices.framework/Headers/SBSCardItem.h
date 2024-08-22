// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCARDITEM_H
#define SBSCARDITEM_H

@class NSString, NSData, UIImage, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSString *bundleName; // ivar: _bundleName
@property (copy, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (copy, nonatomic) NSData *iconData; // ivar: _iconData
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL requiresPasscode; // ivar: _requiresPasscode
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) UIImage *thumbnail; // ivar: _thumbnail
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 categoryIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 subtitle:(id)arg4 body:(id)arg5 requiresPasscode:(BOOL)arg6 bundleName:(id)arg7 userInfo:(id)arg8 ;
-(id)initWithIdentifier:(id)arg0 iconData:(id)arg1 title:(id)arg2 body:(id)arg3 requiresPasscode:(BOOL)arg4 bundleName:(id)arg5 userInfo:(id)arg6 ;
-(id)sortDate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif