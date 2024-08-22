// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXBOOKMARKACTION_H
#define SXBOOKMARKACTION_H

@class NSString;
@protocol SXAction, SXBookmark;

#import <Foundation/Foundation.h>

#import "SXJSONDictionary.h"

@interface SXBookmarkAction : NSObject <SXAction>



@property (readonly, nonatomic) SXJSONDictionary *analytics; // ivar: analytics
@property (readonly, nonatomic) NSObject<SXBookmark> *bookmark; // ivar: _bookmark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)initWithBookmark:(id)arg0 ;


@end


#endif