// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSCONTACT_H
#define _PSCONTACT_H

@class CNContact;

#import <Foundation/Foundation.h>


@interface _PSContact : NSObject

@property (copy, nonatomic) CNContact *cnContact; // ivar: _cnContact
@property (nonatomic) BOOL isChild; // ivar: _isChild


-(id)initWithCNContact:(id)arg0 isChild:(BOOL)arg1 ;


@end


#endif