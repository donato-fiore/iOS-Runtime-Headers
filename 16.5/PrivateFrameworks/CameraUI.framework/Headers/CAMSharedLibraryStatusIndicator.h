// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSHAREDLIBRARYSTATUSINDICATOR_H
#define CAMSHAREDLIBRARYSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMSharedLibraryStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setSharedLibraryMode:) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode


-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(NSUInteger)customPointSizeForImageSymbol;
-(id)imageNameForCurrentState;


@end


#endif