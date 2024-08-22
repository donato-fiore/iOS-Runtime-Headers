// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONSTATUSTERMS_H
#define ICMUSICSUBSCRIPTIONSTATUSTERMS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICMusicSubscriptionStatusTerms : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger acceptedVersion; // ivar: _acceptedVersion
@property (readonly, nonatomic) NSInteger currentVersion; // ivar: _currentVersion
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseTermsDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif