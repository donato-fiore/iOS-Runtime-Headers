// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIMPRESSIONELEMENT_H
#define MUIMPRESSIONELEMENT_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface MUImpressionElement : NSObject

@property (retain, nonatomic) NSObject *customData; // ivar: _customData
@property (copy, nonatomic) NSString *debugString; // ivar: _debugString
@property (readonly, nonatomic) NSUUID *elementIdentifier; // ivar: _elementIdentifier
@property (nonatomic) CGRect frame; // ivar: _frame
@property (copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) CGFloat visibilityThreshold; // ivar: _visibilityThreshold


-(id)initWithElementIdentifier:(id)arg0 visibilityThreshold:(CGFloat)arg1 ;


@end


#endif