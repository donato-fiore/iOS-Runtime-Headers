// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSWALLPAPEROBSERVERSNAPSHOTUPDATE_H
#define PRSWALLPAPEROBSERVERSNAPSHOTUPDATE_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSServerPosterPath.h"

@interface PRSWallpaperObserverSnapshotUpdate : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PRSServerPosterPath *path; // ivar: _path
@property (retain, nonatomic) NSString *snapshotType; // ivar: _snapshotType
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 snapshotType:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif