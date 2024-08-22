// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXPROMISEDOUTOFBANDTRANSFER_H
#define IXPROMISEDOUTOFBANDTRANSFER_H

@protocol NSSecureCoding;


#import "IXOpaqueDataPromise.h"
#import "IXPromisedOutOfBandTransferSeed.h"

@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise <NSSecureCoding>



@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) CGFloat percentComplete;
@property (retain, nonatomic) IXPromisedOutOfBandTransferSeed *seed;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 client:(NSUInteger)arg1 diskSpaceNeeded:(NSUInteger)arg2 ;
-(id)initWithSeed:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif