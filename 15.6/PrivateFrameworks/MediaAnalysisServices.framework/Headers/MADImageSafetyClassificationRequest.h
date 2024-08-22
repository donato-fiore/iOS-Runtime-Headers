// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MADIMAGESAFETYCLASSIFICATIONREQUEST_H
#define MADIMAGESAFETYCLASSIFICATIONREQUEST_H

@class NSString;


#import "MADRequest.h"

@interface MADImageSafetyClassificationRequest : MADRequest

@property (copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (copy, nonatomic) NSString *stagedText; // ivar: _stagedText


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif