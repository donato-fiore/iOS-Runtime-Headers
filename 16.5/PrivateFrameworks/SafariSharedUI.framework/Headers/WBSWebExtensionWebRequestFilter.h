// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONWEBREQUESTFILTER_H
#define WBSWEBEXTENSIONWEBREQUESTFILTER_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionWebRequestFilter : NSObject {
    CGFloat _tabID;
    CGFloat _windowID;
    NSArray *_urlPatterns;
    NSSet *_types;
}




-(BOOL)matchesRequestForResourceOfType:(NSInteger)arg0 URL:(id)arg1 tabID:(CGFloat)arg2 windowID:(CGFloat)arg3 ;
-(id)_initializeWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 outErrorMessage:(*id)arg1 ;


@end


#endif