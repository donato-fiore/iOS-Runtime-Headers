// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ULTRAVIOLETINDEXMODEL_H
#define ULTRAVIOLETINDEXMODEL_H

@class NSString, UIColor;

#import <Foundation/Foundation.h>


@interface UltravioletIndexModel : NSObject

@property (readonly, nonatomic) CGFloat fraction; // ivar: _fraction
@property (readonly, nonatomic) NSString *localizedIndex; // ivar: _localizedIndex
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)ultravioletIndexModelForConditions:(id)arg0 indexNumberFormatter:(id)arg1 useRoundedVariant:(BOOL)arg2 ;


@end


#endif