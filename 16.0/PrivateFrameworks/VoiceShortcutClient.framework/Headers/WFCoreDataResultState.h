// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOREDATARESULTSTATE_H
#define WFCOREDATARESULTSTATE_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFCoreDataResultState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger objectType; // ivar: _objectType
@property (readonly, nonatomic) NSSet *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectType:(NSUInteger)arg0 state:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif