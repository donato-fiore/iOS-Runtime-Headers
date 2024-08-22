// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTTRANSPORTKEYSUPDATE_H
#define CTTRANSPORTKEYSUPDATE_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTTransportKeysUpdate : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *keys; // ivar: _keys
@property (retain, nonatomic) NSString *sps_environment; // ivar: _sps_environment


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWith:(id)arg0 ;
-(id)initWith:(id)arg0 sps:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif