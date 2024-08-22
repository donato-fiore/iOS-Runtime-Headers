// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCARUNLOCKSUPPORTEDTERMINAL_H
#define PKCARUNLOCKSUPPORTEDTERMINAL_H

@class NSArray, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface PKCarUnlockSupportedTerminal : NSObject

@property (readonly, copy, nonatomic) NSArray *associatedApplicationIdentifiers; // ivar: _associatedApplicationIdentifiers
@property (readonly, copy, nonatomic) NSString *manufacturerIdentifier; // ivar: _manufacturerIdentifier
@property (readonly, copy, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (readonly, copy, nonatomic) NSString *partnerName; // ivar: _partnerName
@property (readonly, copy, nonatomic) NSSet *terminalCriteria; // ivar: _terminalCriteria


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif