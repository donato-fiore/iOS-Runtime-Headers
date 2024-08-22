// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSPHONETEMPORARYALIASDESCRIPTION_H
#define IDSPHONETEMPORARYALIASDESCRIPTION_H

@class IDSURI, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSPhoneTemporaryAliasDescription : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) IDSURI *URI; // ivar: _URI
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL selected; // ivar: _selected


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 expirationDate:(id)arg1 selected:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif