// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSME_H
#define DSME_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface DSMe : NSObject

@property (copy, nonatomic) NSSet *emails; // ivar: _emails
@property (copy, nonatomic) NSString *meCardIdentifier; // ivar: _meCardIdentifier
@property (copy, nonatomic) NSSet *phoneNumbers; // ivar: _phoneNumbers


-(id)init;


@end


#endif