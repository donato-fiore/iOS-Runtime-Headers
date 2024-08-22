// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTRICONTENTUNAVAILABLECONFIGURATIONSTATE_H
#define TTRICONTENTUNAVAILABLECONFIGURATIONSTATE_H

@class NSString, UITraitCollection;
@protocol UIConfigurationState;


#import "TTRIUIContentUnavailableShim.h"

@interface TTRIContentUnavailableConfigurationState : TTRIUIContentUnavailableShim <UIConfigurationState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *searchControllerText;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection;


+(Class)implClass;
-(id)asUIKit;
-(id)customStateForKey:(id)arg0 ;
-(id)initWithTraitCollection:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setCustomState:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif