// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTVOICEMAILINFOTYPE_H
#define CTVOICEMAILINFOTYPE_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL available; // ivar: _available
@property (retain, nonatomic) NSNumber *count; // ivar: _count
@property (nonatomic) BOOL isNetworkOriginated; // ivar: _isNetworkOriginated
@property (nonatomic) BOOL isVoiceMailMWI; // ivar: _isVoiceMailMWI
@property (retain, nonatomic) NSString *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCTVoicemailInfoType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParam:(id)arg0 available:(BOOL)arg1 count:(id)arg2 isNetworkOriginated:(BOOL)arg3 isVoiceMailMWI:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif