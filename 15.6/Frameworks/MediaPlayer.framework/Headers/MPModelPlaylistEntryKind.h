// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELPLAYLISTENTRYKIND_H
#define MPMODELPLAYLISTENTRYKIND_H

@class NSArray;


#import "MPModelKind.h"

@interface MPModelPlaylistEntryKind : MPModelKind

@property (readonly, nonatomic) NSArray *kinds; // ivar: _kinds


+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithKinds:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)humanDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToView:(struct shared_ptr<mlcore::LibraryView> )arg0 withContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif