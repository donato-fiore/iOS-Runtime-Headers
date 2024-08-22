// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRMEDIASUGGESTIONREQUESTOPTIONS_H
#define MRMEDIASUGGESTIONREQUESTOPTIONS_H

@class NSArray, NSString;
@protocol MRMediaSuggestionRequestOptionsConfigurable;

#import <Foundation/Foundation.h>


@interface MRMediaSuggestionRequestOptions : NSObject <MRMediaSuggestionRequestOptionsConfigurable>



@property (copy, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (copy, nonatomic) NSArray *contexts; // ivar: _contexts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultOptions;
-(id)initWithBlock:(id)arg0 ;


@end


#endif