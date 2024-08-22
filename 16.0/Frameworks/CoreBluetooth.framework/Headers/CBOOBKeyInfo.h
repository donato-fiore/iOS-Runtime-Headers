// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBOOBKEYINFO_H
#define CBOOBKEYINFO_H

@class NSData;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBOOBKeyInfo : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSData *btAddressData; // ivar: _btAddressData
@property (copy, nonatomic) NSData *irkData; // ivar: _irkData


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif