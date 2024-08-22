// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROPVHOSTAPPDELEGATE_H
#define MIROPVHOSTAPPDELEGATE_H

@class NSString;
@protocol PVHostApplicationDelegate;

#import <Foundation/Foundation.h>


@interface MiroPVHostAppDelegate : NSObject <PVHostApplicationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)preferredDisplayColorSpace;
-(id)preferredExportColorSpace;


@end


#endif