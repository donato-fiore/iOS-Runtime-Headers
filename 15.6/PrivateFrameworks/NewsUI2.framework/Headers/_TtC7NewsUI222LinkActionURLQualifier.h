// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7NEWSUI222LINKACTIONURLQUALIFIER_H
#define _TTC7NEWSUI222LINKACTIONURLQUALIFIER_H

@protocol SXLinkActionURLQualifier;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI222LinkActionURLQualifier : NSObject <SXLinkActionURLQualifier>





-(BOOL)allowCopyingOfURL:(id)arg0 ;
-(BOOL)allowOpenInNewWindowForURL:(id)arg0 ;
-(BOOL)allowOpenInSafariForURL:(id)arg0 ;
-(id)init;


@end


#endif