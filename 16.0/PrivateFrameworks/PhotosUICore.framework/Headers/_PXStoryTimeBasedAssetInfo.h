// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYTIMEBASEDASSETINFO_H
#define _PXSTORYTIMEBASEDASSETINFO_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface _PXStoryTimeBasedAssetInfo : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


-(id)initWithDate:(id)arg0 uuid:(id)arg1 ;


@end


#endif