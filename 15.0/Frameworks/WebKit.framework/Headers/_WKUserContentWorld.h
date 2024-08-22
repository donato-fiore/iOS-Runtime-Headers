// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKUSERCONTENTWORLD_H
#define _WKUSERCONTENTWORLD_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKUserContentWorld : NSObject <WKObject>

 {
    RetainPtr<WKContentWorld> _contentWorld;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class superclass;


+(id)normalWorld;
+(id)worldWithName:(id)arg0 ;
-(id)_init;
-(id)_initWithContentWorld:(id)arg0 ;
-(id)_initWithName:(id)arg0 ;


@end


#endif