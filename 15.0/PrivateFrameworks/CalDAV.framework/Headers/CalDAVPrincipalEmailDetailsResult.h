// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVPRINCIPALEMAILDETAILSRESULT_H
#define CALDAVPRINCIPALEMAILDETAILSRESULT_H

@class NSString, NSSet, NSURL;

#import <Foundation/Foundation.h>


@interface CalDAVPrincipalEmailDetailsResult : NSObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSSet *preferredAddresses; // ivar: _preferredAddresses
@property (retain, nonatomic) NSURL *principalURL; // ivar: _principalURL


+(id)resultFromResponseItem:(id)arg0 ;
-(id)addresses;
-(id)description;


@end


#endif