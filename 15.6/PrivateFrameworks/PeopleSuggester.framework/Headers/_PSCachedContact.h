// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCACHEDCONTACT_H
#define _PSCACHEDCONTACT_H

@class CNContact, NSDate;

#import <Foundation/Foundation.h>


@interface _PSCachedContact : NSObject

@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


-(id)initWithExpirationDate:(id)arg0 contact:(id)arg1 ;


@end


#endif