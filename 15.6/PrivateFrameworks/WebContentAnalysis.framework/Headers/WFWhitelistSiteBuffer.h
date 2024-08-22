// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWHITELISTSITEBUFFER_H
#define WFWHITELISTSITEBUFFER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFWhitelistSiteBuffer : NSObject

@property NSUInteger maxSize; // ivar: _maxSize
@property (retain) NSMutableDictionary *siteTree; // ivar: _siteTree


-(BOOL)containsURLString:(id)arg0 ;
-(BOOL)treeContainsURLString:(id)arg0 ;
-(id)init;
-(void)addURLString:(id)arg0 ;
-(void)dealloc;


@end


#endif