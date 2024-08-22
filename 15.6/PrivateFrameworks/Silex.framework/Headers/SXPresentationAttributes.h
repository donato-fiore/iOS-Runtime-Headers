// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPRESENTATIONATTRIBUTES_H
#define SXPRESENTATIONATTRIBUTES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SXPresentationAttributes : NSObject

@property (nonatomic) CGSize canvasSize; // ivar: _canvasSize
@property (nonatomic) CGFloat contentScaleFactor; // ivar: _contentScaleFactor
@property (retain, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (nonatomic) BOOL enableViewportDebugging; // ivar: _enableViewportDebugging
@property (nonatomic) BOOL fadeInComponents; // ivar: _fadeInComponents
@property (nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (nonatomic) BOOL testingConditionEnabled; // ivar: _testingConditionEnabled
@property (nonatomic) BOOL useTransparentToolbar; // ivar: _useTransparentToolbar


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif