// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRVECTORTIMESTAMPELEMENT_H
#define CRVECTORTIMESTAMPELEMENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRVectorTimestampElement : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger clock; // ivar: _clock
@property (nonatomic) NSUInteger subclock; // ivar: _subclock


+(BOOL)supportsSecureCoding;
-(NSInteger)rem_compareToVectorTimestampElement:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif