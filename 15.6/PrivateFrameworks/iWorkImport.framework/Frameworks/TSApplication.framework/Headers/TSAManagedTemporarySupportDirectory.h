// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAMANAGEDTEMPORARYSUPPORTDIRECTORY_H
#define TSAMANAGEDTEMPORARYSUPPORTDIRECTORY_H

@class TSUManagedTemporaryDirectory, NSURL;



@interface TSAManagedTemporarySupportDirectory : TSUManagedTemporaryDirectory

@property (readonly, nonatomic) NSURL *supportURL; // ivar: _supportURL


-(id)initWithURL:(id)arg0 ;


@end


#endif