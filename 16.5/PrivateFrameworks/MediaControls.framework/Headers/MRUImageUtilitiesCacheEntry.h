// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUIMAGEUTILITIESCACHEENTRY_H
#define MRUIMAGEUTILITIESCACHEENTRY_H

@class MSVTimer, NSString, UIImage;

#import <Foundation/Foundation.h>


@interface MRUImageUtilitiesCacheEntry : NSObject

@property (retain, nonatomic) MSVTimer *evictionTimer; // ivar: _evictionTimer
@property (nonatomic) CGSize fittingSize; // ivar: _fittingSize
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image


-(void)cancelEvictionTimer;
-(void)dealloc;
-(void)startEvictionTimer;


@end


#endif