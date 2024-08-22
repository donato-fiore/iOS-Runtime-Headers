// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COTIMERDISMISSREQUEST_H
#define COTIMERDISMISSREQUEST_H

@class NSString;


#import "COMeshRequest.h"

@interface COTimerDismissRequest : COMeshRequest

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimerIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif