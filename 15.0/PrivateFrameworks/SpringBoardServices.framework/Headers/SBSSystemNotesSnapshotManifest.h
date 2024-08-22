// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSSYSTEMNOTESSNAPSHOTMANIFEST_H
#define SBSSYSTEMNOTESSNAPSHOTMANIFEST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSSystemNotesSnapshotManifest : NSObject <NSSecureCoding>

 {
    NSArray *_snapshots;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSnapshots:(id)arg0 ;
-(id)snapshotForPresentationMode:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif