// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWCONTENTRULEMANAGER_H
#define SWCONTENTRULEMANAGER_H

@class NSString, WKUserContentController;
@protocol SWContentRuleManager, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface SWContentRuleManager : NSObject <SWContentRuleManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserContentController *userContentController; // ivar: _userContentController


-(id)configureContentRules;
-(id)initWithUserContentController:(id)arg0 ;
-(void)addContentRuleList:(id)arg0 identifier:(id)arg1 ;
-(void)removeContentListForIdentifier:(id)arg0 ;


@end


#endif