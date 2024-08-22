// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXOWNEDDATAPROMISE_H
#define IXOWNEDDATAPROMISE_H

@class NSURL, NSString;
@protocol NSSecureCoding;


#import "IXDataPromise.h"
#import "IXOwnedDataPromiseSeed.h"

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding>



@property (retain, nonatomic) IXOwnedDataPromiseSeed *seed;
@property (retain, nonatomic) NSURL *stagedPath; // ivar: _stagedPath
@property (readonly, nonatomic) NSURL *stagingBaseDir;
@property (retain, nonatomic) NSString *targetLastPathComponent; // ivar: _targetLastPathComponent


-(id)targetLastPathComponentWithError:(*id)arg0 ;


@end


#endif