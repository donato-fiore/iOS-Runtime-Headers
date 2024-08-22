// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQSPECIFIERINFO_H
#define ICQSPECIFIERINFO_H

@class NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQImageURL.h"

@interface ICQSpecifierInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (retain, nonatomic) ICQImageURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *subTitle; // ivar: _subTitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif