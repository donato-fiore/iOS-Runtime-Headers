// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERMEDIASELECTIONCRITERIA_H
#define AVPLAYERMEDIASELECTIONCRITERIA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVPlayerMediaSelectionCriteria : NSObject {
    *void _criteriaInternal;
}


@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, nonatomic) NSArray *preferredMediaCharacteristics;
@property (readonly, nonatomic) NSArray *principalMediaCharacteristics;


-(BOOL)precludeMultichannelAudio;
-(BOOL)preferMultichannelAudio;
-(id)description;
-(id)figDictionary;
-(id)init;
-(id)initWithFigDictionary:(id)arg0 ;
-(id)initWithPreferredLanguages:(id)arg0 preferredMediaCharacteristics:(id)arg1 ;
-(id)initWithPreferredLanguages:(id)arg0 preferredMediaCharacteristics:(id)arg1 fallbackPreferredLanguages:(id)arg2 fallbackPreferredMediaCharacteristics:(id)arg3 captionDisplayType:(NSInteger)arg4 ;
-(id)initWithPreferredLanguages:(id)arg0 preferredMediaCharacteristics:(id)arg1 preferredMediaSubTypes:(id)arg2 precludedMediaSubTypes:(id)arg3 ;
-(id)initWithPreferredLanguages:(id)arg0 preferredMediaCharacteristics:(id)arg1 preferredMediaSubTypes:(id)arg2 precludedMediaSubTypes:(id)arg3 preferMultichannelAudio:(BOOL)arg4 precludeMultichannelAudio:(BOOL)arg5 ;
-(id)initWithPrincipalMediaCharacteristics:(id)arg0 preferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 ;
-(id)precludedMediaSubTypes;
-(id)preferredMediaSubTypes;
-(void)dealloc;


@end


#endif