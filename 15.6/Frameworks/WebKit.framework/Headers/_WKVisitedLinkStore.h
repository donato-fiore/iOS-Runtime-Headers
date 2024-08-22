// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKVISITEDLINKSTORE_H
#define _WKVISITEDLINKSTORE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKVisitedLinkStore : NSObject <WKObject>

 {
    ObjectStorage<WebKit::VisitedLinkStore> _visitedLinkStore;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsVisitedLinkWithURL:(id)arg0 ;
-(id)init;
-(void)addVisitedLinkWithString:(id)arg0 ;
-(void)addVisitedLinkWithURL:(id)arg0 ;
-(void)dealloc;
-(void)removeAll;
-(void)removeVisitedLinkWithURL:(id)arg0 ;


@end


#endif