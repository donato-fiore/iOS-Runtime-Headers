// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKOPERATIONGROUPSYSTEMIMPOSEDINFO_H
#define CKOPERATIONGROUPSYSTEMIMPOSEDINFO_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding, NSCopying>



@property NSInteger expectedReceiveSize; // ivar: _expectedReceiveSize
@property NSInteger expectedSendSize; // ivar: _expectedSendSize
@property (copy) NSDictionary *networkServiceTypePerConfig; // ivar: _networkServiceTypePerConfig


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif