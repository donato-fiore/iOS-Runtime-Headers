// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSIDEBARIMAGEREQUESTDETAILS_H
#define PXSIDEBARIMAGEREQUESTDETAILS_H

@class NSIndexSet;

#import <Foundation/Foundation.h>

#import "PXMediaProvider.h"

@interface PXSidebarImageRequestDetails : NSObject

@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (copy, nonatomic) NSIndexSet *mediaRequestIDs; // ivar: _mediaRequestIDs
@property (readonly, nonatomic) NSInteger sidebarRequestID; // ivar: _sidebarRequestID


-(id)init;
-(id)initWithMediaProvider:(id)arg0 mediaRequestIDs:(id)arg1 ;
-(void)cancel;


@end


#endif