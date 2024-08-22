// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IXPROMISEDTRANSFERTOPATH_H
#define IXPROMISEDTRANSFERTOPATH_H

@class NSURL;
@protocol NSSecureCoding;


#import "IXOwnedDataPromise.h"
#import "IXPromisedTransferToPathSeed.h"

@interface IXPromisedTransferToPath : IXOwnedDataPromise <NSSecureCoding>



@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) CGFloat percentComplete;
@property (retain, nonatomic) IXPromisedTransferToPathSeed *seed;
@property (nonatomic) BOOL shouldCopy;
@property (retain, nonatomic) NSURL *transferPath;
@property (nonatomic) BOOL tryDeltaCopy;


+(BOOL)supportsSecureCoding;
-(BOOL)_doInit;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 client:(NSUInteger)arg1 diskSpaceNeeded:(NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 client:(NSUInteger)arg1 transferPath:(id)arg2 diskSpaceNeeded:(NSUInteger)arg3 ;
-(id)initWithSeed:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif