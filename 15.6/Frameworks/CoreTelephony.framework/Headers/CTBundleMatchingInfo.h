// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTBUNDLEMATCHINGINFO_H
#define CTBUNDLEMATCHINGINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTBundleMatchingInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *imsi; // ivar: _imsi
@property (retain, nonatomic) NSString *mcc; // ivar: _mcc
@property (retain, nonatomic) NSString *mnc; // ivar: _mnc


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif