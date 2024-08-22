// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSFEEDBACKMETRICSEVENTINTERNAL_H
#define _PSFEEDBACKMETRICSEVENTINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PSFeedbackMetricsEventInternal : NSObject {
    ? id;
    ? engagedSuggestionId;
}


@property (nonatomic, readonly) BOOL airdropOptionPresent; // ivar: airdropOptionPresent
@property (nonatomic, readonly) NSString *engagedSuggestionId;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSInteger type; // ivar: type
@property (nonatomic, readonly) unsigned char visibleAppSuggestionCount; // ivar: visibleAppSuggestionCount
@property (nonatomic, readonly) unsigned char visiblePeopleSuggestionCount; // ivar: visiblePeopleSuggestionCount


-(id)init;
-(id)initWithId:(id)arg0 type:(NSInteger)arg1 engagedSuggestionId:(id)arg2 airdropOptionPresent:(BOOL)arg3 visiblePeopleSuggestionCount:(unsigned char)arg4 visibleAppSuggestionCount:(unsigned char)arg5 ;


@end


#endif