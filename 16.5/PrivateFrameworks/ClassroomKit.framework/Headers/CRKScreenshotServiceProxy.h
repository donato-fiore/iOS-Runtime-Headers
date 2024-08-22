// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKSCREENSHOTSERVICEPROXY_H
#define CRKSCREENSHOTSERVICEPROXY_H

@protocol CRKScreenshotServiceInterface;

#import <Foundation/Foundation.h>

#import "CRKValidXPCConnectionProvider.h"

@interface CRKScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface>



@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider; // ivar: _connectionProvider


-(id)init;
-(void)_fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif