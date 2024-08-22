// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKNAVIGATION_H
#define WKNAVIGATION_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKNavigation : NSObject <WKObject>

 {
    ObjectStorage<API::Navigation> _navigation;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveContentMode;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isUserInitiated;
-(id)_request;
-(void)dealloc;


@end


#endif