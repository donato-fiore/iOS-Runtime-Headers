// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIUPNEXTBUTTON_H
#define VUIUPNEXTBUTTON_H

@class NSString;
@protocol VUIUpNextButtonProtocol;


#import "VUIButton.h"
#import "VUIUpNextButtonProperties.h"

@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIUpNextButtonProperties *properties; // ivar: _properties
@property (copy, nonatomic) id *stateDidChangeHandler; // ivar: _stateDidChangeHandler
@property (readonly) Class superclass;


-(id)initWithType:(NSUInteger)arg0 interfaceStyle:(NSUInteger)arg1 ;
-(id)largeContentTitle;
-(struct CGSize )intrinsicContentSize;
-(void)selectButtonAction:(id)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)upNextStateChangedToAdded;
-(void)upNextStateChangedToRemoved;


@end


#endif