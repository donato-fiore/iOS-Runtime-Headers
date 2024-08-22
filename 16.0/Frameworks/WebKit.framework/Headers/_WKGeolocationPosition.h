// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKGEOLOCATIONPOSITION_H
#define _WKGEOLOCATIONPOSITION_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKGeolocationPosition : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebGeolocationPosition> _geolocationPosition;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)positionWithLocation:(id)arg0 ;
-(void)dealloc;


@end


#endif