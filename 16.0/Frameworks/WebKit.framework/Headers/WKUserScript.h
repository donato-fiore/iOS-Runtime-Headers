// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKUSERSCRIPT_H
#define WKUSERSCRIPT_H

@class NSString;
@protocol WKObject, NSCopying;

#import <Foundation/Foundation.h>

#import "WKContentWorld.h"
#import "_WKUserContentWorld.h"

@interface WKUserScript : NSObject <WKObject, NSCopying>

 {
    ObjectStorage<API::UserScript> _userScript;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) WKContentWorld *_contentWorld;
@property (readonly, nonatomic) _WKUserContentWorld *_userContentWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForMainFrameOnly) BOOL forMainFrameOnly;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger injectionTime;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly) Class superclass;


-(id)_initWithSource:(id)arg0 injectionTime:(NSInteger)arg1 forMainFrameOnly:(BOOL)arg2 includeMatchPatternStrings:(id)arg3 excludeMatchPatternStrings:(id)arg4 associatedURL:(id)arg5 contentWorld:(id)arg6 deferRunningUntilNotification:(BOOL)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSource:(id)arg0 injectionTime:(NSInteger)arg1 forMainFrameOnly:(BOOL)arg2 ;
-(id)initWithSource:(id)arg0 injectionTime:(NSInteger)arg1 forMainFrameOnly:(BOOL)arg2 inContentWorld:(id)arg3 ;
-(void)dealloc;


@end


#endif