// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLINTERSILOUNIVERSE_H
#define CLINTERSILOUNIVERSE_H

@class NSString;
@protocol CLIntersiloUniverse;

#import <Foundation/Foundation.h>

#import "CLSilo.h"
#import "CLServiceVendor.h"

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLSilo *silo; // ivar: _silo
@property (readonly) Class superclass;
@property (readonly, nonatomic) CLServiceVendor *vendor; // ivar: _vendor


+(id)newIsolatedUniverseWithOnlySilo:(id)arg0 ;
+(id)newSharedVendorUniverseWithSilo:(id)arg0 ;
-(id)initWithSilo:(id)arg0 vendor:(id)arg1 ;


@end


#endif