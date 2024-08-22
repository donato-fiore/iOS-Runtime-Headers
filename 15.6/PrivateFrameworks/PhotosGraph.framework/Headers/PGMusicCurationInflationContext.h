// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMUSICCURATIONINFLATIONCONTEXT_H
#define PGMUSICCURATIONINFLATIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGMusicCurationInflationContext : NSObject {
    ? cache;
    ? shouldForceMetadataRefetch;
    ? actionSource;
}


@property (nonatomic, readonly) NSString *actionSource;


+(id)contextWithMusicCache:(id)arg0 actionSource:(id)arg1 shouldForceMetadataRefetch:(BOOL)arg2 ;
-(id)init;


@end


#endif