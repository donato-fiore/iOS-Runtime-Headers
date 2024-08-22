// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKCONTENTRULELIST_H
#define WKCONTENTRULELIST_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKContentRuleList : NSObject <WKObject>

 {
    ObjectStorage<API::ContentRuleList> _contentRuleList;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


+(BOOL)_supportsRegularExpression:(id)arg0 ;
-(void)dealloc;


@end


#endif