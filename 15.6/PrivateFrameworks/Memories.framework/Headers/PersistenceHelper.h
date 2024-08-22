// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PERSISTENCEHELPER_H
#define PERSISTENCEHELPER_H


#import <Foundation/Foundation.h>


@interface PersistenceHelper : NSObject



-(id)encodeMovieData:(id)arg0 isPHMemory:(BOOL)arg1 ;
-(id)fetchFreezeInfo:(id)arg0 ;
-(id)readMovieDataWith:(id)arg0 ;
-(void)performChangesWith:(id)arg0 pickedAssets:(id)arg1 memory:(id)arg2 movieData:(id)arg3 keyAsset:(id)arg4 title:(id)arg5 subtitle:(id)arg6 freezeRanges:(id)arg7 ;


@end


#endif