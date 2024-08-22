// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSAVAILABLEAPPWITHEXTENSION_H
#define WBSAVAILABLEAPPWITHEXTENSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSAvailableAppWithExtension : NSObject

@property (readonly, copy, nonatomic) NSString *adamID; // ivar: _adamID
@property (readonly, copy, nonatomic) NSString *platformSpecificBundleID; // ivar: _platformSpecificBundleID
@property (copy, nonatomic) NSString *requiredTeamID; // ivar: _requiredTeamID


-(id)initWithAdamID:(id)arg0 platformSpecificBundleID:(id)arg1 ;


@end


#endif