// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPASSWORDSHARINGINFO_H
#define SFPASSWORDSHARINGINFO_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFPasswordSharingInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *channel; // ivar: _channel
@property (retain, nonatomic) NSString *networkName; // ivar: _networkName
@property (retain, nonatomic) NSString *psk; // ivar: _psk


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif