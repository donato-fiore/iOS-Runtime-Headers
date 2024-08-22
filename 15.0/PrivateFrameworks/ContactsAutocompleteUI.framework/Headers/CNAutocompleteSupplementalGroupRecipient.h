// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETESUPPLEMENTALGROUPRECIPIENT_H
#define CNAUTOCOMPLETESUPPLEMENTALGROUPRECIPIENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNAutocompleteSupplementalGroupRecipient : NSObject

@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSArray *members; // ivar: _members
@property (readonly, copy) NSString *title; // ivar: _title


-(id)initWithIdentifier:(id)arg0 title:(id)arg1 members:(id)arg2 ;


@end


#endif