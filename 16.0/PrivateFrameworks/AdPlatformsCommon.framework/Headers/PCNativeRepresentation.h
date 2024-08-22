// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCNATIVEREPRESENTATION_H
#define PCNATIVEREPRESENTATION_H

@class NSString, NSArray;


#import "APRepresentationData.h"
#import "PCNativeStyle.h"

@interface PCNativeRepresentation : APRepresentationData

@property (retain, nonatomic) NSString *accessibleAdCopy; // ivar: _accessibleAdCopy
@property (retain, nonatomic) NSString *accessibleHeadline; // ivar: _accessibleHeadline
@property (retain, nonatomic) NSString *adCopy; // ivar: _adCopy
@property (nonatomic) NSInteger adType; // ivar: _adType
@property (retain, nonatomic) PCNativeStyle *defaultStyle; // ivar: _defaultStyle
@property (retain, nonatomic) NSArray *elements; // ivar: _elements
@property (retain, nonatomic) NSString *headline; // ivar: _headline
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) NSString *sponsor; // ivar: _sponsor


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif