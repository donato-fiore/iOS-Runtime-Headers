// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATSESSIONMESSAGEDIDINVALIDATE_H
#define CATSESSIONMESSAGEDIDINVALIDATE_H

@class NSError;


#import "CATSessionMessage.h"

@interface CATSessionMessageDidInvalidate : CATSessionMessage

@property (copy, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif