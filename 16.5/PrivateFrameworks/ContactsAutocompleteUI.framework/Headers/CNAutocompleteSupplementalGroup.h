// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETESUPPLEMENTALGROUP_H
#define CNAUTOCOMPLETESUPPLEMENTALGROUP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CNAutocompleteSupplementalGroup : NSObject

@property (readonly, copy) NSArray *groupMembers; // ivar: _groupMembers
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSString *title; // ivar: _title


-(id)initWithIdentifier:(id)arg0 title:(id)arg1 members:(id)arg2 ;


@end


#endif