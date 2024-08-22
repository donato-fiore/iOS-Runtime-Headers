// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFBOOKMARKTOUCHICONREQUEST_H
#define SFBOOKMARKTOUCHICONREQUEST_H

@class WBSTouchIconRequest, WebBookmark;



@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest

@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark


+(id)requestWithBookmark:(id)arg0 ;
+(id)requestWithBookmark:(id)arg0 iconGenerationEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBookmark:(id)arg0 ;
-(id)initWithBookmark:(id)arg0 iconGenerationEnabled:(BOOL)arg1 ;


@end


#endif