// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATRESPONSE_H
#define ATRESPONSE_H

@class NSError;
@protocol NSSecureCoding;


#import "ATMessage.h"

@interface ATResponse : ATMessage <NSSecureCoding>



@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic, getter=isPartial) BOOL partial; // ivar: _partial


+(BOOL)supportsSecureCoding;
-(id)additionalDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif