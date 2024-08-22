// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSALIGNMENTLAYOUTRULE_H
#define NSALIGNMENTLAYOUTRULE_H

@class NSArray, NSString;
@protocol NSLayoutRule;

#import <Foundation/Foundation.h>


@interface NSAlignmentLayoutRule : NSObject <NSLayoutRule>



@property (readonly, copy) NSArray *alignedAnchors; // ivar: _alignedAnchors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) Class superclass;


+(id)alignmentWithAnchors:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)makeChildRules;
-(void)dealloc;


@end


#endif