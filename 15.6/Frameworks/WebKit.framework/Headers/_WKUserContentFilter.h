// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKUSERCONTENTFILTER_H
#define _WKUSERCONTENTFILTER_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKUserContentFilter : NSObject <WKObject>

 {
    RetainPtr<WKContentRuleList> _contentRuleList;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithWKContentRuleList:(id)arg0 ;


@end


#endif