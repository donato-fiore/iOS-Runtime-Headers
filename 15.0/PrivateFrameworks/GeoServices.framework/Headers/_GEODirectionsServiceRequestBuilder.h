// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEODIRECTIONSSERVICEREQUESTBUILDER_H
#define _GEODIRECTIONSSERVICEREQUESTBUILDER_H


#import <Foundation/Foundation.h>

#import "GEORouteAttributes.h"

@interface _GEODirectionsServiceRequestBuilder : NSObject {
    GEORouteAttributes *_builder;
    id *_block;
}




+(id)builderFor:(id)arg0 withBlock:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(void)buildRequest:(id)arg0 result:(id)arg1 ;


@end


#endif