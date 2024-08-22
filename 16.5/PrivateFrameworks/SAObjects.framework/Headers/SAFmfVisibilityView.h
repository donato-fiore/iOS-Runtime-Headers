// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFMFVISIBILITYVIEW_H
#define SAFMFVISIBILITYVIEW_H

@class NSURL;


#import "SAUISnippet.h"

@interface SAFmfVisibilityView : SAUISnippet

@property (copy, nonatomic) NSURL *searchContext;
@property (nonatomic) BOOL visible;


+(id)visibilityView;
+(id)visibilityViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif