// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPCOMPANIONLINKASSERTION_H
#define RPCOMPANIONLINKASSERTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RPCompanionLinkClient.h"

@interface RPCompanionLinkAssertion : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *assertionID; // ivar: _assertionID
@property (retain, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (copy, nonatomic) NSString *destinationID; // ivar: _destinationID
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif