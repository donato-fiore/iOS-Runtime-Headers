// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCURATIONLENGTHINFO_H
#define PXSTORYCURATIONLENGTHINFO_H


#import <Foundation/Foundation.h>


@interface PXStoryCurationLengthInfo : NSObject

@property (readonly, nonatomic) NSUInteger availableCurationLengths; // ivar: _availableCurationLengths
@property (readonly, nonatomic) NSUInteger defaultCurationLength; // ivar: _defaultCurationLength


-(id)init;
-(id)initWithAvailableLengths:(NSUInteger)arg0 defaultLength:(NSUInteger)arg1 ;


@end


#endif