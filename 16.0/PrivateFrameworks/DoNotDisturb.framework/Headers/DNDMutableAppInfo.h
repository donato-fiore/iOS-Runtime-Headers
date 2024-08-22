// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDMUTABLEAPPINFO_H
#define DNDMUTABLEAPPINFO_H

@class NSURL, NSString;


#import "DNDAppInfo.h"
#import "DNDApplicationIdentifier.h"

@interface DNDMutableAppInfo : DNDAppInfo

@property (copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier;
@property (copy, nonatomic) NSURL *cachedIconURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) NSInteger source;
@property (copy, nonatomic) NSURL *storeIconURL;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif