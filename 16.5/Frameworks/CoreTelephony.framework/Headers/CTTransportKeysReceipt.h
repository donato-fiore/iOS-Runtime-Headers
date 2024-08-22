// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTTRANSPORTKEYSRECEIPT_H
#define CTTRANSPORTKEYSRECEIPT_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTTransportKeysReceipt : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *sps_environment; // ivar: _sps_environment
@property (retain, nonatomic) NSArray *stks; // ivar: _stks


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWith:(id)arg0 ;
-(id)initWith:(id)arg0 sps:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif