// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSYSTEMCONTENTWHITELIST_H
#define WFSYSTEMCONTENTWHITELIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WFSystemContentWhitelist : NSObject {
    NSArray *_whitelistItems;
}




+(id)defaultSystemWhitelist;
+(id)newWhitelistItemFromPlistEntry:(id)arg0 ;
-(BOOL)isURLWhitelisted:(id)arg0 ;
-(id)initWithWhitelistURL:(id)arg0 ;
-(void)dealloc;


@end


#endif