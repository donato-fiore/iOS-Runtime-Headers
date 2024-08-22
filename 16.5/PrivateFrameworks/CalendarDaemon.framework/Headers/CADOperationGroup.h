// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADOPERATIONGROUP_H
#define CADOPERATIONGROUP_H


#import <Foundation/Foundation.h>

#import "ClientConnection.h"

@interface CADOperationGroup : NSObject

@property (readonly, nonatomic) ClientConnection *conn; // ivar: _conn


+(BOOL)requiresEventAccess;
+(id)whitelistedBundles;
-(BOOL)accessGranted;
-(id)initWithClientConnection:(id)arg0 ;


@end


#endif