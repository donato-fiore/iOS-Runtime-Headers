// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSHAREDTRACKLISTPOSITION_H
#define ICSHAREDTRACKLISTPOSITION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICSharedTracklistPosition : NSObject

@property (readonly, copy, nonatomic) NSString *afterItemIdentifier; // ivar: _afterItemIdentifier
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)playLastPositionWithAfterItemIdentifierHint:(id)arg0 ;
+(id)playNextPositionWithAfterItemIdentifierHint:(id)arg0 ;
+(id)specifiedPositionAfterItemIdentifier:(id)arg0 ;


@end


#endif