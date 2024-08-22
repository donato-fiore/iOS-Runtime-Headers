// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSDISPLAYZOOMMODE_H
#define DBSDISPLAYZOOMMODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DBSDisplayZoomMode : NSObject

@property (readonly, nonatomic) NSUInteger displayZoomOption; // ivar: _displayZoomOption
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)initWithDisplayZoomOption:(NSUInteger)arg0 localizedName:(id)arg1 size:(struct CGSize )arg2 ;


@end


#endif