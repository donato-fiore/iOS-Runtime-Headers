// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSNOTIFICATION_H
#define TPSNOTIFICATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"
#import "TPSAssets.h"

@interface TPSNotification : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) TPSAssets *assets; // ivar: _assets
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)na_identity;
+(id)notificationFromDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif