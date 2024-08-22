// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXPROMISEDINMEMORYDICTIONARY_H
#define IXPROMISEDINMEMORYDICTIONARY_H

@protocol NSSecureCoding;


#import "IXOwnedDataPromise.h"
#import "IXPromisedInMemoryDictionarySeed.h"

@interface IXPromisedInMemoryDictionary : IXOwnedDataPromise <NSSecureCoding>



@property (retain, nonatomic) IXPromisedInMemoryDictionarySeed *seed;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 client:(NSUInteger)arg1 dictionary:(id)arg2 ;
-(id)initWithSeed:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetWithCompletion:(id)arg0 ;


@end


#endif