// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPCOMBINEDWALRUSSTATUS_H
#define CDPCOMBINEDWALRUSSTATUS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CDPCombinedWalrusStatus : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger escrowWalrusStatus; // ivar: _escrowWalrusStatus
@property (nonatomic) NSUInteger octagonWalrusStatus; // ivar: _octagonWalrusStatus
@property (nonatomic) NSUInteger pcsWalrusStatus; // ivar: _pcsWalrusStatus


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif