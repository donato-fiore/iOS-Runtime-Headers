// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDSUGGESTEDPERSON_H
#define _CDSUGGESTEDPERSON_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "_CDContact.h"

@interface _CDSuggestedPerson : NSObject

@property (retain) _CDContact *contact; // ivar: _contact
@property (retain) NSString *interactionBundleID; // ivar: _interactionBundleID
@property (retain) NSArray *interactions; // ivar: _interactions
@property CGFloat rank; // ivar: _rank
@property CGFloat score; // ivar: _score


-(id)description;


@end


#endif