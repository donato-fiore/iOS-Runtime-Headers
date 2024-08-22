// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTEXTUALACTIONSUGGESTIONMETADATA_H
#define WFCONTEXTUALACTIONSUGGESTIONMETADATA_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface WFContextualActionSuggestionMetadata : NSObject

@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly, nonatomic) NSUUID *suggestionUUID; // ivar: _suggestionUUID


-(id)initWithSuggestionUUID:(id)arg0 sessionUUID:(id)arg1 ;


@end


#endif