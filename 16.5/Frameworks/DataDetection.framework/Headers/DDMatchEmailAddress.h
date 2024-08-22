// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDMATCHEMAILADDRESS_H
#define DDMATCHEMAILADDRESS_H

@class NSString;


#import "DDMatch.h"

@interface DDMatchEmailAddress : DDMatch

@property (readonly, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, nonatomic) NSString *label; // ivar: _label


-(id)initWithDDScannerResult:(id)arg0 ;


@end


#endif