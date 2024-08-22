// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTERESTRICTIONS_H
#define EDAMNOTERESTRICTIONS_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMNoteRestrictions : FATObject

@property (retain, nonatomic) NSNumber *noEmail; // ivar: _noEmail
@property (retain, nonatomic) NSNumber *noShare; // ivar: _noShare
@property (retain, nonatomic) NSNumber *noSharePublicly; // ivar: _noSharePublicly
@property (retain, nonatomic) NSNumber *noUpdateContent; // ivar: _noUpdateContent
@property (retain, nonatomic) NSNumber *noUpdateTitle; // ivar: _noUpdateTitle


+(id)structFields;
+(id)structName;


@end


#endif