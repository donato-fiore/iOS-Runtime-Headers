// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKDIAGNOSTICALLOWLIST_H
#define DKDIAGNOSTICALLOWLIST_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface DKDiagnosticAllowList : NSObject

@property (retain, nonatomic) NSArray *allowList; // ivar: _allowList
@property (readonly, nonatomic) NSString *contactMessage; // ivar: _contactMessage


-(BOOL)containsIdentifier:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 contactMessage:(id)arg1 ;


@end


#endif