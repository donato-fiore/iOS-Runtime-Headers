// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSATTRIBUTEDSTRINGWITHRESOLVEDINTENTS_H
#define _NSATTRIBUTEDSTRINGWITHRESOLVEDINTENTS_H

@class NSAttributedString;



@interface _NSAttributedStringWithResolvedIntents : NSAttributedString {
    NSAttributedString *_string;
    Class _resolver;
}




-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)initWithUnresolvedString:(id)arg0 resolver:(Class)arg1 ;
-(id)string;


@end


#endif