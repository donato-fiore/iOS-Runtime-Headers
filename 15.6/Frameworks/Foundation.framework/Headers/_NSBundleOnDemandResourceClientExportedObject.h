// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSBUNDLEONDEMANDRESOURCECLIENTEXPORTEDOBJECT_H
#define _NSBUNDLEONDEMANDRESOURCECLIENTEXPORTEDOBJECT_H

@protocol ODRClientProtocol;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSBundleOnDemandResourceClientExportedObject : NSObject <ODRClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)sendLowDiskSpaceNotification;


@end


#endif