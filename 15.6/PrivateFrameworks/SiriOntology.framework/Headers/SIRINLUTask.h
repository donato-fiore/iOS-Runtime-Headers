// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUTASK_H
#define SIRINLUTASK_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUTask : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) USOSerializedGraph *task; // ivar: _task


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTask:(id)arg0 score:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif