// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNEWSLETTERSUBSCRIBECOMMAND_H
#define FCNEWSLETTERSUBSCRIBECOMMAND_H

@class NSArray, NSString;


#import "FCCommand.h"

@interface FCNewsletterSubscribeCommand : FCCommand

@property (copy, nonatomic) NSArray *includeArray; // ivar: _includeArray
@property (copy, nonatomic) NSString *newsletter; // ivar: _newsletter


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNewsletter:(id)arg0 includeArray:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif