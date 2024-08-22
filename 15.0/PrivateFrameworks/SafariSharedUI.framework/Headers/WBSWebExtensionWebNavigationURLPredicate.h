// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONWEBNAVIGATIONURLPREDICATE_H
#define WBSWEBEXTENSIONWEBNAVIGATIONURLPREDICATE_H


#import <Foundation/Foundation.h>


@interface WBSWebExtensionWebNavigationURLPredicate : NSObject {
    NSInteger _type;
    id *_value;
}




-(BOOL)matchesURL:(id)arg0 ;
-(id)initWithTypeString:(id)arg0 value:(id)arg1 outErrorMessage:(*id)arg2 ;


@end


#endif