// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUENTITYCANDIDATE_H
#define SIRINLUENTITYCANDIDATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUEntityCandidate : NSObject <NSSecureCoding>



@property (retain, nonatomic) USOSerializedGraph *entity; // ivar: _entity
@property CGFloat score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntity:(id)arg0 score:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif