// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSINSTALLATIONOPERATION_H
#define _LSINSTALLATIONOPERATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _LSInstallationOperation : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) BOOL claimed; // ivar: _claimed
@property (readonly, nonatomic) NSInteger installType; // ivar: _installType


-(id)description;
-(id)initWithBundleID:(id)arg0 installType:(NSInteger)arg1 block:(id)arg2 ;
-(id)redactedDescription;


@end


#endif