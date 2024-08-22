// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCCENDPOINT_H
#define PCCENDPOINT_H

@class NSArray;
@protocol OSASyncProxyHandler;

#import <Foundation/Foundation.h>


@interface PCCEndpoint : NSObject {
    id<OSASyncProxyHandler> *_delegate;
}


@property (readonly) NSArray *deviceIds; // ivar: _deviceIds
@property unsigned int fileTimeout; // ivar: _fileTimeout


-(BOOL)isDeviceNearby:(id)arg0 ;
-(id)send:(id)arg0 file:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(id)send:(id)arg0 message:(id)arg1 error:(*id)arg2 ;
-(id)synchronize:(id)arg0 withOptions:(id)arg1 ;
-(void)runWithDelegate:(id)arg0 ;


@end


#endif