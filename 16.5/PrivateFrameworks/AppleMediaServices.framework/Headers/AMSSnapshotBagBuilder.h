// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSNAPSHOTBAGBUILDER_H
#define AMSSNAPSHOTBAGBUILDER_H

@class NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSSnapshotBagBuilder : NSObject

@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) NSDictionary *defaultValues; // ivar: _defaultValues
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) AMSProcessInfo *processInfo; // ivar: _processInfo
@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (retain, nonatomic) NSString *profileVersion; // ivar: _profileVersion


-(id)buildWithError:(*id)arg0 ;


@end


#endif