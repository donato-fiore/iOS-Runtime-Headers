// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USERVOICEPROFILE_H
#define USERVOICEPROFILE_H


#import <Foundation/Foundation.h>


@interface UserVoiceProfile : NSObject

@property (nonatomic) float duration_mean; // ivar: _duration_mean
@property (nonatomic) float duration_std; // ivar: _duration_std
@property (nonatomic) float energy_mean; // ivar: _energy_mean
@property (nonatomic) float energy_std; // ivar: _energy_std
@property (nonatomic) float pitch_mean; // ivar: _pitch_mean
@property (nonatomic) float pitch_std; // ivar: _pitch_std


-(id)init;
-(id)initWithJson:(id)arg0 ;


@end


#endif