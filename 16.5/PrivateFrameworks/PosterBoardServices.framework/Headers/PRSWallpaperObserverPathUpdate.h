// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSWALLPAPEROBSERVERPATHUPDATE_H
#define PRSWALLPAPEROBSERVERPATHUPDATE_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSServerPosterIdentity.h"
#import "PRSServerPosterPath.h"

@interface PRSWallpaperObserverPathUpdate : NSObject <BSXPCSecureCoding>



@property (nonatomic) NSUInteger changed; // ivar: _changed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PRSServerPosterIdentity *identity; // ivar: _identity
@property (nonatomic) NSUInteger locations; // ivar: _locations
@property (retain, nonatomic) PRSServerPosterPath *path; // ivar: _path
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif