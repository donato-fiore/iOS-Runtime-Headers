// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRADIOCONTENTREFERENCE_H
#define ICRADIOCONTENTREFERENCE_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy, nonatomic) NSDictionary *matchDictionary;
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (readonly, copy, nonatomic) NSDictionary *rawContentDictionary;


+(BOOL)supportsSecureCoding;
+(id)storeItemWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif