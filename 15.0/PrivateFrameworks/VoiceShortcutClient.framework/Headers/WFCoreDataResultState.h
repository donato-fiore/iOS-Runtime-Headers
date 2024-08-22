// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOREDATARESULTSTATE_H
#define WFCOREDATARESULTSTATE_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFCoreDataResultState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSSet *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif