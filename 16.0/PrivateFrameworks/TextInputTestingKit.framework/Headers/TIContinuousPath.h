// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TICONTINUOUSPATH_H
#define TICONTINUOUSPATH_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIContinuousPath : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *samples; // ivar: _samples
@property (readonly, nonatomic) CGFloat timeStamp;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJsonDictionary:(id)arg0 ;
-(id)initWithTimeStamp:(CGFloat)arg0 ;
-(id)toJsonDictionary;
-(void)addSample:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif