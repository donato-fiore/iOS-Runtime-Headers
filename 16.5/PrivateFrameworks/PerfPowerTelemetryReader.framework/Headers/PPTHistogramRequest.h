// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTHISTOGRAMREQUEST_H
#define PPTHISTOGRAMREQUEST_H

@class NSArray;
@protocol NSSecureCoding;


#import "PPTDataRequest.h"

@interface PPTHistogramRequest : PPTDataRequest <NSSecureCoding>



@property (readonly) NSArray *dimensions; // ivar: _dimensions


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(id)arg0 predicate:(id)arg1 timeFilter:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif