// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXNAMESPACE_H
#define CXNAMESPACE_H


#import <Foundation/Foundation.h>

#import "CXNamespace.h"

@interface CXNamespace : NSObject {
    char * mUri;
    ? mDocument;
    *_xmlNs mDocumentNamespace;
}


@property (retain, nonatomic) CXNamespace *fallbackNamespace; // ivar: mFallbackNamespace


+(?)isPrefixSupportedFromNodeContextprefix;
+(BOOL)isNamespaceSupported:(char *)arg0 ;
+(BOOL)isPrefixSupportedFromStream:(struct _xmlTextReader *)arg0 prefix:(char *)arg1 ;
+(void)clearRegisteredNamespaces;
+(void)registerNamespace:(id)arg0 ;
-(?)containsAttribute;
-(?)containsNode;
-(char *)fallbackUri;
-(char *)uri;
-(id)init;
-(id)initUnsupportedNsWithUri:(char *)arg0 ;
-(id)initWithUri:(char *)arg0 ;
-(id)initWithUri:(char *)arg0 fallbackNamespace:(id)arg1 ;


@end


#endif