// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPREQUEST_H
#define GEOMAPREQUEST_H


#import <Foundation/Foundation.h>

#import "GEOMapRequestManager.h"

@interface GEOMapRequest : NSObject {
    GEOMapRequestManager *_requestManager;
}


@property (copy, nonatomic) id *cancellationHandler; // ivar: _cancellationHandler
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) BOOL isFinished; // ivar: _isFinished


-(id)initWithManager:(id)arg0 ;
-(void)_finishAndCallHandler:(id)arg0 ;
-(void)cancel;
-(void)complete;
-(void)dealloc;


@end


#endif