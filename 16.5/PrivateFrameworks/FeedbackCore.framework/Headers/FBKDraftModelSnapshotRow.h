// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKDRAFTMODELSNAPSHOTROW_H
#define FBKDRAFTMODELSNAPSHOTROW_H


#import <Foundation/Foundation.h>

#import "FBKDraftModelSnapshotSection.h"

@interface FBKDraftModelSnapshotRow : NSObject

@property (retain, nonatomic) NSObject *object; // ivar: _object
@property (retain, nonatomic) FBKDraftModelSnapshotSection *section; // ivar: _section


-(id)description;
-(id)initWithSection:(id)arg0 object:(id)arg1 ;


@end


#endif