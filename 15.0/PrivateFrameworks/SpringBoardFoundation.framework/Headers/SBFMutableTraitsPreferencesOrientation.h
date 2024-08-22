// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFMUTABLETRAITSPREFERENCESORIENTATION_H
#define SBFMUTABLETRAITSPREFERENCESORIENTATION_H



#import "SBFTraitsPreferencesOrientation.h"

@interface SBFMutableTraitsPreferencesOrientation : SBFTraitsPreferencesOrientation

@property (nonatomic) BOOL canDetermineActiveOrientation;
@property (nonatomic) NSInteger preferredOrientation;
@property (nonatomic) NSUInteger supportedOrientations;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif