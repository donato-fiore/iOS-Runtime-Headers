// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PARCARDREQUEST_H
#define PARCARDREQUEST_H

@class NSURL;
@protocol NSSecureCoding;


#import "PARRequest.h"

@interface PARCardRequest : PARRequest <NSSecureCoding>



@property (copy, nonatomic) NSURL *cardURL; // ivar: _cardURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)nwActivityLabel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif