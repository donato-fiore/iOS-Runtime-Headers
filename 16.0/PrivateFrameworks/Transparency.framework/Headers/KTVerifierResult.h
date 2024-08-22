// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KTVERIFIERRESULT_H
#define KTVERIFIERRESULT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "KTAccountPublicID.h"

@interface KTVerifierResult : NSObject <NSSecureCoding>



@property BOOL everOptedIn; // ivar: _everOptedIn
@property (retain) NSArray *loggableDatas; // ivar: _loggableDatas
@property BOOL optedIn; // ivar: _optedIn
@property (retain) KTAccountPublicID *publicID; // ivar: _publicID
@property BOOL recentlyOptedIn; // ivar: _recentlyOptedIn
@property BOOL staticAccountKeyEnforced; // ivar: _staticAccountKeyEnforced
@property NSUInteger succeed; // ivar: _succeed
@property (retain) NSString *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUri:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif