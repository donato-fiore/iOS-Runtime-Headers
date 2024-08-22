// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMUTABLECONTACTHANDLE_H
#define DNDMUTABLECONTACTHANDLE_H

@class NSString;


#import "DNDContactHandle.h"

@interface DNDMutableContactHandle : DNDContactHandle

@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) NSUInteger type;
@property (copy, nonatomic) NSString *value;




@end


#endif