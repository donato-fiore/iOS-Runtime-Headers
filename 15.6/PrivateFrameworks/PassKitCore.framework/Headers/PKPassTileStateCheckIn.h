// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSTILESTATECHECKIN_H
#define PKPASSTILESTATECHECKIN_H



#import "PKPassTileState.h"

@interface PKPassTileStateCheckIn : PKPassTileState



+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToUnresolvedState:(id)arg0 ;
-(id)createResolvedStateWithBundle:(id)arg0 privateBundle:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif