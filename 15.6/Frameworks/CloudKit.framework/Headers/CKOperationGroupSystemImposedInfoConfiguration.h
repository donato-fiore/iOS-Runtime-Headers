// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKOPERATIONGROUPSYSTEMIMPOSEDINFOCONFIGURATION_H
#define CKOPERATIONGROUPSYSTEMIMPOSEDINFOCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKOperationGroupSystemImposedInfoConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (nonatomic) BOOL isUplink; // ivar: _isUplink


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif