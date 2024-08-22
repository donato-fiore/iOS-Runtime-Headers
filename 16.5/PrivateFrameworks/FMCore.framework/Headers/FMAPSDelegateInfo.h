// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMAPSDELEGATEINFO_H
#define FMAPSDELEGATEINFO_H

@class NSString;
@protocol FMAPSDelegate;

#import <Foundation/Foundation.h>


@interface FMAPSDelegateInfo : NSObject

@property (weak, nonatomic) NSObject<FMAPSDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *topic; // ivar: _topic




@end


#endif