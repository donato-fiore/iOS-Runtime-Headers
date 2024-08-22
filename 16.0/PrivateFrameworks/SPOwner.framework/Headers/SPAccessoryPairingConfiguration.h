// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPACCESSORYPAIRINGCONFIGURATION_H
#define SPACCESSORYPAIRINGCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPAccessoryPairingConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *roleEmoji; // ivar: _roleEmoji
@property (nonatomic) NSInteger roleId; // ivar: _roleId


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 roleId:(NSInteger)arg1 roleEmoji:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif