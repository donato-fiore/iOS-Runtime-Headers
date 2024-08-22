// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDSPOTLIGHTCACHEDCONTACT_H
#define _CDSPOTLIGHTCACHEDCONTACT_H

@class CNContact, NSDate;

#import <Foundation/Foundation.h>


@interface _CDSpotlightCachedContact : NSObject

@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


-(id)initWithExpirationDate:(id)arg0 contact:(id)arg1 ;


@end


#endif