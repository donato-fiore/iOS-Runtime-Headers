// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKUSERSTYLESHEET_H
#define _WKUSERSTYLESHEET_H

@class NSURL, NSString;
@protocol WKObject, NSCopying;

#import <Foundation/Foundation.h>


@interface _WKUserStyleSheet : NSObject <WKObject, NSCopying>

 {
    ObjectStorage<API::UserStyleSheet> _userStyleSheet;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForMainFrameOnly) BOOL forMainFrameOnly;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSource:(id)arg0 forMainFrameOnly:(BOOL)arg1 ;
-(id)initWithSource:(id)arg0 forWKWebView:(id)arg1 forMainFrameOnly:(BOOL)arg2 includeMatchPatternStrings:(id)arg3 excludeMatchPatternStrings:(id)arg4 baseURL:(id)arg5 level:(NSInteger)arg6 contentWorld:(id)arg7 ;
-(void)dealloc;


@end


#endif