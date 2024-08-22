// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUNEIGHBORHOODHANDOFFCONTEXT_H
#define TUNEIGHBORHOODHANDOFFCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUNeighborhoodHandoffContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger pullContext; // ivar: _pullContext
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandoffType:(NSInteger)arg0 ;
-(id)initWithPullContext:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif