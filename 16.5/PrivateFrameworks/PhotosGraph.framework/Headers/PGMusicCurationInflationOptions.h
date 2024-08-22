// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMUSICCURATIONINFLATIONOPTIONS_H
#define PGMUSICCURATIONINFLATIONOPTIONS_H


#import <Foundation/Foundation.h>


@interface PGMusicCurationInflationOptions : NSObject

@property (nonatomic) NSInteger inflationActionSource; // ivar: _inflationActionSource
@property (readonly, nonatomic) BOOL shouldForceMetadataRefetch; // ivar: _shouldForceMetadataRefetch


+(id)stringFromInflationActionSource:(NSInteger)arg0 ;
-(id)initWithInflationActionSource:(NSInteger)arg0 ;
-(id)initWithRequestOptionsDictionary:(id)arg0 inflationActionSource:(NSInteger)arg1 ;


@end


#endif