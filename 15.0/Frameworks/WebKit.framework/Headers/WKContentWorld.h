// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKCONTENTWORLD_H
#define WKCONTENTWORLD_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "_WKUserContentWorld.h"

@interface WKContentWorld : NSObject <WKObject>

 {
    ObjectStorage<API::ContentWorld> _contentWorld;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy, nonatomic) _WKUserContentWorld *_userContentWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class superclass;


+(id)defaultClientWorld;
+(id)pageWorld;
+(id)worldWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif