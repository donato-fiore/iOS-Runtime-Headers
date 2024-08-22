// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKCONTENTRULELISTACTION_H
#define _WKCONTENTRULELISTACTION_H

@class NSString, NSArray;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKContentRuleListAction : NSObject <WKObject>

 {
    ObjectStorage<API::ContentRuleListAction> _action;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) BOOL blockedCookies;
@property (readonly, nonatomic) BOOL blockedLoad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL madeHTTPS;
@property (readonly, nonatomic) BOOL modifiedHeaders;
@property (readonly, copy, nonatomic) NSArray *notifications;
@property (readonly, nonatomic) BOOL redirected;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif