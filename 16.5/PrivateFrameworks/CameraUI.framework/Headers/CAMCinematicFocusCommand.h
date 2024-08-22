// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCINEMATICFOCUSCOMMAND_H
#define CAMCINEMATICFOCUSCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMCinematicFocusCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _metadataObjectID; // ivar: __metadataObjectID
@property (readonly, nonatomic) CGPoint _pointOfInterest; // ivar: __pointOfInterest
@property (readonly, nonatomic) BOOL _useFixedOpticalFocus; // ivar: __useFixedOpticalFocus
@property (readonly, nonatomic) BOOL _useHardFocus; // ivar: __useHardFocus


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMetadataObjectID:(NSInteger)arg0 atPointOfInterest:(struct CGPoint )arg1 useFixedOpticalFocus:(BOOL)arg2 useHardFocus:(BOOL)arg3 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif