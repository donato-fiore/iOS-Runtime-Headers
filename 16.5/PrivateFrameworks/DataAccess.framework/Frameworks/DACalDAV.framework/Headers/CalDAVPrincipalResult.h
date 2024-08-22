// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVPRINCIPALRESULT_H
#define CALDAVPRINCIPALRESULT_H

@class NSArray, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CalDAVPrincipalResult : NSObject

@property (readonly, nonatomic) NSArray *cuAddresses;
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSMutableArray *mCUAddresses; // ivar: _mCUAddresses
@property (retain, nonatomic) NSMutableArray *mEmailAddresses; // ivar: _mEmailAddresses
@property (readonly, nonatomic) NSString *preferredCUAddress;
@property (retain, nonatomic) NSString *principalPath; // ivar: _principalPath
@property (retain, nonatomic) NSString *resultType; // ivar: _resultType


+(id)resultFromResponse:(id)arg0 ;
-(id)convertToDAContactSearchResultElement;
-(id)description;
-(id)init;
-(id)initWithResponse:(id)arg0 ;
-(void)addCUAddress:(id)arg0 ;
-(void)addEmail:(id)arg0 ;


@end


#endif