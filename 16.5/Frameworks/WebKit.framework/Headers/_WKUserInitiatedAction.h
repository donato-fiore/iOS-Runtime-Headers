// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKUSERINITIATEDACTION_H
#define _WKUSERINITIATEDACTION_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKUserInitiatedAction : NSObject <WKObject>

 {
    ObjectStorage<API::UserInitiatedAction> _userInitiatedAction;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic, getter=isConsumed) BOOL consumed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)consume;
-(void)dealloc;


@end


#endif