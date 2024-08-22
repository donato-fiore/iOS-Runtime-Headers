// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMDAACCOUNTINFO_H
#define REMDAACCOUNTINFO_H

@class NSString, REMObjectID;
@protocol REMDAAccountProviding;

#import <Foundation/Foundation.h>


@interface REMDAAccountInfo : NSObject <REMDAAccountProviding>



@property (retain, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) REMObjectID *rem_accountObjectID; // ivar: _rem_accountObjectID
@property (readonly) Class superclass;


-(id)initWithAccountID:(id)arg0 remAccountObjectID:(id)arg1 accountDescription:(id)arg2 ;
-(id)loggingDescription;


@end


#endif