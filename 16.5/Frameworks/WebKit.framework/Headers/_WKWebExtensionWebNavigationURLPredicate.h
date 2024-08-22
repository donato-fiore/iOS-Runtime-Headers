// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKWEBEXTENSIONWEBNAVIGATIONURLPREDICATE_H
#define _WKWEBEXTENSIONWEBNAVIGATIONURLPREDICATE_H


#import <Foundation/Foundation.h>


@interface _WKWebExtensionWebNavigationURLPredicate : NSObject {
    NSInteger _type;
    id *_value;
}




-(BOOL)matchesURL:(id)arg0 ;
-(id)initWithTypeString:(id)arg0 value:(id)arg1 outErrorMessage:(*id)arg2 ;


@end


#endif