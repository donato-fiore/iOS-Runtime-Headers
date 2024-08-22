// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNGEMINIRESULT_H
#define CNGEMINIRESULT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNGeminiChannel.h"

@interface CNGeminiResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *availableChannels; // ivar: _availableChannels
@property (readonly, nonatomic) CNGeminiChannel *channel; // ivar: _channel
@property (readonly, nonatomic) NSInteger usage; // ivar: _usage


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithChannel:(id)arg0 usage:(NSInteger)arg1 availableChannels:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif