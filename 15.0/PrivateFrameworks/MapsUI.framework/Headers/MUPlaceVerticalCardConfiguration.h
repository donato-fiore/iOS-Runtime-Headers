// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEVERTICALCARDCONFIGURATION_H
#define MUPLACEVERTICALCARDCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface MUPlaceVerticalCardConfiguration : NSObject

@property (nonatomic) NSDirectionalEdgeInsets bottomSeparatorInset; // ivar: _bottomSeparatorInset
@property (nonatomic) BOOL showSeparators; // ivar: _showSeparators


+(id)plainConfiguration;
+(id)separatorConfiguration;


@end


#endif