// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWIFTUITEXTSTORAGE_H
#define SWIFTUITEXTSTORAGE_H

@class NSConcreteTextStorage;



@interface SwiftUITextStorage : NSConcreteTextStorage

@property (nonatomic, setter=_setBaselineDelta:) CGFloat _baselineDelta; // ivar: _baselineDelta
@property (nonatomic, setter=_setForceWordWrapping:) BOOL _forceWordWrapping; // ivar: _forceWordWrapping
@property (nonatomic, setter=_setWrappedByCluster:) BOOL _wrappedByCluster; // ivar: _wrappedByCluster
@property (nonatomic) CGFloat defaultTighteningFactor; // ivar: _defaultTighteningFactor


-(BOOL)_baselineMode;
-(BOOL)_isStringDrawingTextStorage;
-(BOOL)_shouldSetOriginalFontAttribute;


@end


#endif