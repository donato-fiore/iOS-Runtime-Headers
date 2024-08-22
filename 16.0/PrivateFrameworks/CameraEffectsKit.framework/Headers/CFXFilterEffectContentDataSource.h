// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXFILTEREFFECTCONTENTDATASOURCE_H
#define CFXFILTEREFFECTCONTENTDATASOURCE_H

@class NSString, NSNumber;
@protocol JFXFilterEffectContentDataSource;

#import <Foundation/Foundation.h>


@interface CFXFilterEffectContentDataSource : NSObject <JFXFilterEffectContentDataSource>



@property (nonatomic) NSUInteger contentAvailability; // ivar: _contentAvailability
@property (retain, nonatomic) NSString *contentVersion; // ivar: _contentVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger inverseToneMapOperator; // ivar: _inverseToneMapOperator
@property (nonatomic) BOOL isContentAvailable; // ivar: _isContentAvailable
@property (nonatomic) BOOL isContentNew; // ivar: _isContentNew
@property (retain, nonatomic) NSNumber *isExpensive; // ivar: _isExpensive
@property (nonatomic) BOOL isStyleTransfer; // ivar: _isStyleTransfer
@property (retain, nonatomic) NSString *localizedAccessibilityName; // ivar: _localizedAccessibilityName
@property (retain, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (retain, nonatomic) NSNumber *proxyRenderScale; // ivar: _proxyRenderScale
@property (retain, nonatomic) NSNumber *requiredProVideoVersion; // ivar: _requiredProVideoVersion
@property (readonly) Class superclass;


-(id)initWithEffectID:(id)arg0 ;


@end


#endif