// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAINVITECOMPLETIONINFO_H
#define FAINVITECOMPLETIONINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FAInviteCompletionInfo : NSObject

@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSUInteger transportType; // ivar: _transportType


-(id)_completionStatusStringValue;
-(id)_transportStringValue;
-(id)serverReadableDictionary;


@end


#endif