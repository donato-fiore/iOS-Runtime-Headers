// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMENTIONCHECKRESULTS_H
#define ICMENTIONCHECKRESULTS_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface ICMentionCheckResults : NSObject

@property (nonatomic) BOOL isAllMention; // ivar: _isAllMention
@property (nonatomic) BOOL isExplicitMention; // ivar: _isExplicitMention
@property (nonatomic) BOOL isPartialMention; // ivar: _isPartialMention
@property (copy, nonatomic) NSSet *matchingParticipants; // ivar: _matchingParticipants
@property (copy, nonatomic) NSString *mentionString; // ivar: _mentionString
@property (nonatomic) _NSRange rangeOfMention; // ivar: _rangeOfMention


-(id)debugDescription;
-(id)init;


@end


#endif