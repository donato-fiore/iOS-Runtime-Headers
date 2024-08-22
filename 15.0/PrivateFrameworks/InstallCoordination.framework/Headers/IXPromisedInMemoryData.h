// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXPROMISEDINMEMORYDATA_H
#define IXPROMISEDINMEMORYDATA_H

@protocol NSSecureCoding;


#import "IXOwnedDataPromise.h"
#import "IXPromisedInMemoryDataSeed.h"

@interface IXPromisedInMemoryData : IXOwnedDataPromise <NSSecureCoding>



@property (retain, nonatomic) IXPromisedInMemoryDataSeed *seed;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 client:(NSUInteger)arg1 data:(id)arg2 ;
-(id)initWithSeed:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetWithCompletion:(id)arg0 ;


@end


#endif