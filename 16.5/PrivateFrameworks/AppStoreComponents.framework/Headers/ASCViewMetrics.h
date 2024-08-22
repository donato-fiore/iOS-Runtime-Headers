// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCVIEWMETRICS_H
#define ASCVIEWMETRICS_H

@class NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCViewMetrics : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *instructions; // ivar: _instructions
@property (readonly, copy, nonatomic) NSDictionary *pageFields; // ivar: _pageFields


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataForInvocationPoint:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInstructions:(id)arg0 pageFields:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif