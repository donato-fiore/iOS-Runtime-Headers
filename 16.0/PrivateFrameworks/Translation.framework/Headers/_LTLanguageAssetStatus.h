// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTLANGUAGEASSETSTATUS_H
#define _LTLANGUAGEASSETSTATUS_H

@class NSString, NSArray, MAProgressNotification;

#import <Foundation/Foundation.h>


@interface _LTLanguageAssetStatus : NSObject

@property (nonatomic) BOOL finished; // ivar: _finished
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *localIdentifiers; // ivar: _localIdentifiers
@property (nonatomic) NSInteger progress; // ivar: _progress
@property (nonatomic) NSUInteger status; // ivar: _status
@property (retain, nonatomic) MAProgressNotification *update; // ivar: _update


-(id)_LTAssetStateString;
-(id)description;


@end


#endif