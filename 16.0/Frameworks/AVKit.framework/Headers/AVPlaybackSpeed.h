// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYBACKSPEED_H
#define AVPLAYBACKSPEED_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVPlaybackSpeed : NSObject {
    BOOL _synthesized;
}


@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *localizedNumericName; // ivar: _localizedNumericName
@property (readonly, nonatomic) float rate; // ivar: _rate


+(id)_rateFormattedAsString:(float)arg0 ;
+(id)systemDefaultSpeeds;
-(BOOL)isSynthesized;
-(id)compactLocalizedName;
-(id)debugDescription;
-(id)description;
-(id)initWithRate:(float)arg0 localizedName:(id)arg1 ;
-(id)initWithRate:(float)arg0 localizedName:(id)arg1 synthesized:(BOOL)arg2 ;
-(id)internalDescription;


@end


#endif