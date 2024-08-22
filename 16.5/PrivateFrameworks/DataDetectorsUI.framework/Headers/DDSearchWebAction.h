// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSEARCHWEBACTION_H
#define DDSEARCHWEBACTION_H

@class NSString;


#import "DDOpenURLAction.h"

@interface DDSearchWebAction : DDOpenURLAction {
    NSString *_query;
}




-(BOOL)canBePerformedByOpeningURL;
-(id)iconName;
-(id)initWithQueryString:(id)arg0 range:(struct _NSRange )arg1 context:(id)arg2 ;
-(id)localizedName;
-(void)performFromView:(id)arg0 ;


@end


#endif