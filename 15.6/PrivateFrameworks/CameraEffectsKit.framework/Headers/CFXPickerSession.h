// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXPICKERSESSION_H
#define CFXPICKERSESSION_H

@class NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface CFXPickerSession : NSObject

@property (readonly, nonatomic) CGFloat compactPresentationDuration; // ivar: _compactPresentationDuration
@property (nonatomic) BOOL didModifyEffectsStack; // ivar: _didModifyEffectsStack
@property (nonatomic) BOOL didRemoveEffect; // ivar: _didRemoveEffect
@property (nonatomic) BOOL didScroll; // ivar: _didScroll
@property (readonly, nonatomic) NSDictionary *effectChangesDict;
@property (readonly, nonatomic) CGFloat expandedPresentationDuration; // ivar: _expandedPresentationDuration
@property (readonly, nonatomic) BOOL isCompactPresentation; // ivar: _isCompactPresentation
@property (readonly, nonatomic) BOOL isExpandedPresentation;
@property (nonatomic) NSDate *lastCompactPresentationTime; // ivar: _lastCompactPresentationTime
@property (nonatomic) NSDate *lastExpandedPresentationTime; // ivar: _lastExpandedPresentationTime
@property (readonly, nonatomic) NSString *pickerBundleIdentifier; // ivar: _pickerBundleIdentifier
@property (readonly, nonatomic) CGFloat sessionDuration;
@property (readonly, nonatomic) NSDate *sessionStartTime; // ivar: _sessionStartTime
@property (nonatomic) *CGFloat totalCompactPresentationDuration; // ivar: _totalCompactPresentationDuration
@property (nonatomic) *CGFloat totalExpandedPresentationDuration; // ivar: _totalExpandedPresentationDuration
@property (nonatomic) NSString *typeOfRemovedEffect; // ivar: _typeOfRemovedEffect


-(id)initWithIdentifier:(id)arg0 isCompact:(BOOL)arg1 ;
-(void)didChangePresentationMode;
-(void)didDismiss;
-(void)didModifyEffectOfType:(id)arg0 wasRemoval:(BOOL)arg1 ;


@end


#endif