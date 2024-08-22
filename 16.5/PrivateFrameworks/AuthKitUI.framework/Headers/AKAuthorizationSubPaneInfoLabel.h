// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHORIZATIONSUBPANEINFOLABEL_H
#define AKAUTHORIZATIONSUBPANEINFOLABEL_H

@class UILabel, NSString;


#import "AKAuthorizationSubPane.h"

@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane

@property (readonly, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (nonatomic) NSUInteger infoLabelType;
@property (nonatomic) NSUInteger internalInfoLabelType; // ivar: _internalInfoLabelType
@property (nonatomic) CGFloat marginInset; // ivar: _marginInset
@property (copy, nonatomic) NSString *string;


-(id)infoLabelWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)addToConstraints:(id)arg0 context:(id)arg1 ;
-(void)addToStackView:(id)arg0 context:(id)arg1 ;
-(void)setLabel:(id)arg0 toInfoLabelType:(NSUInteger)arg1 ;
-(void)setLabelColor:(id)arg0 ;


@end


#endif