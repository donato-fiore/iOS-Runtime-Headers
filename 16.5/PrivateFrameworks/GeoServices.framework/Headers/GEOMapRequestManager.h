// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPREQUESTMANAGER_H
#define GEOMAPREQUESTMANAGER_H

@class NSMutableSet, geo_isolater;

#import <Foundation/Foundation.h>


@interface GEOMapRequestManager : NSObject {
    NSMutableSet *_requests;
    geo_isolater *_isolater;
}




-(id)init;
-(void)dealloc;
-(void)requestComplete:(id)arg0 ;
-(void)trackRequest:(id)arg0 ;


@end


#endif