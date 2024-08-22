// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPRIVATELISTENINGSTATESOURCE_H
#define MPCPRIVATELISTENINGSTATESOURCE_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *currentValue; // ivar: _currentValue
@property (copy, nonatomic) NSNumber *overrideValue; // ivar: _overrideValue
@property (readonly, nonatomic) NSInteger sourceType;


+(BOOL)supportsSecureCoding;
+(id)localDeviceSource;
+(id)sourceWithUserIdentity:(id)arg0 ;
+(id)staticSourceWithValue:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif