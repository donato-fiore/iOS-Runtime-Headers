// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCONVERSATIONPROVIDER_H
#define TUCONVERSATIONPROVIDER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationProvider : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName


+(BOOL)supportsSecureCoding;
+(id)expanseProvider;
+(id)faceTimeProvider;
+(id)providerForIdentifier:(id)arg0 ;
+(id)unknownProvider;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 localizedName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif