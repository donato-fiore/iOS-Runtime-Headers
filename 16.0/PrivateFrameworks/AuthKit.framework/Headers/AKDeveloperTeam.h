// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKDEVELOPERTEAM_H
#define AKDEVELOPERTEAM_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKDeveloperTeam : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *apps; // ivar: _apps
@property (copy, nonatomic) NSString *privateEmail; // ivar: _privateEmail
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif