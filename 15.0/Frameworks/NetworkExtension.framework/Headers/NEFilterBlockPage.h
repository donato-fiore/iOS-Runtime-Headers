// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFILTERBLOCKPAGE_H
#define NEFILTERBLOCKPAGE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface NEFilterBlockPage : NSObject {
    NSString *_organization;
}


@property (copy) NSString *formActionURL; // ivar: _formActionURL
@property (copy) NSString *organization;
@property (readonly) NSURL *pageTemplateURL; // ivar: _pageTemplateURL
@property (copy) NSString *remediationButtonText; // ivar: _remediationButtonText
@property (copy) NSString *unblockStyle; // ivar: _unblockStyle
@property (copy) NSString *userURL; // ivar: _userURL


-(id)_blockPage;
-(id)_css;
-(id)init;
-(id)page;


@end


#endif