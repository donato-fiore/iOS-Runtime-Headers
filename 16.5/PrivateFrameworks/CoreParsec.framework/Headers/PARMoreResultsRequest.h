// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PARMORERESULTSREQUEST_H
#define PARMORERESULTSREQUEST_H

@class NSURL;
@protocol NSSecureCoding;


#import "PARRequest.h"

@interface PARMoreResultsRequest : PARRequest <NSSecureCoding>



@property (copy, nonatomic) NSURL *moreResultsURL; // ivar: _moreResultsURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)nwActivityLabel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif