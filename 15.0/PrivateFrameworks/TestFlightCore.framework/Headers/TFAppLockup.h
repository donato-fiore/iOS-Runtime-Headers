// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFAPPLOCKUP_H
#define TFAPPLOCKUP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "TFIconArtwork.h"

@interface TFAppLockup : NSObject

@property (readonly, nonatomic) TFIconArtwork *iconArtwork; // ivar: _iconArtwork
@property (readonly, copy, nonatomic) NSArray *subtitles; // ivar: _subtitles
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitles:(id)arg1 iconArtwork:(id)arg2 ;


@end


#endif