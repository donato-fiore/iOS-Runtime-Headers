// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONDECLARATIVENETREQUESTMATCHEDRULEACTION_H
#define WBSWEBEXTENSIONDECLARATIVENETREQUESTMATCHEDRULEACTION_H

@class NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionDeclarativeNetRequestMatchedRuleAction : NSObject

@property (readonly, nonatomic) CGFloat tabID; // ivar: _tabID
@property (readonly, nonatomic) NSDate *time; // ivar: _time
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)description;
-(id)initWithTabID:(CGFloat)arg0 type:(NSInteger)arg1 url:(id)arg2 ;


@end


#endif