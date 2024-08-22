// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTNRSTATUS_H
#define CTNRSTATUS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL isNSADisabled; // ivar: _isNSADisabled
@property (nonatomic) BOOL isSADisabled; // ivar: _isSADisabled
@property (nonatomic) NSUInteger nsaDisabledReasonMask; // ivar: _nsaDisabledReasonMask
@property (nonatomic) NSUInteger saDisabledReasonMask; // ivar: _saDisabledReasonMask


+(BOOL)supportsSecureCoding;
+(id)default;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSADisabled:(BOOL)arg0 saReasonMask:(NSUInteger)arg1 nsaDisabled:(BOOL)arg2 nsaReasonMask:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif