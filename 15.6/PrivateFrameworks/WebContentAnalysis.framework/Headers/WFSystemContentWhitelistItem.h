// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSYSTEMCONTENTWHITELISTITEM_H
#define WFSYSTEMCONTENTWHITELISTITEM_H


#import <Foundation/Foundation.h>


@interface WFSystemContentWhitelistItem : NSObject {
    char * _utf8DomainGlob;
}




-(BOOL)matchesURL:(id)arg0 ;
-(id)initWithDomainGlob:(id)arg0 ;
-(void)dealloc;


@end


#endif