// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSVISUALFORMATLAYOUTRULE_H
#define NSVISUALFORMATLAYOUTRULE_H

@class NSString, NSDictionary;
@protocol NSLayoutRule;

#import <Foundation/Foundation.h>

#import "NSLayoutRect.h"

@interface NSVisualFormatLayoutRule : NSObject <NSLayoutRule>

 {
    NSString *_visualFormatString;
    NSUInteger _formatOptions;
    NSDictionary *_metricMapping;
    NSDictionary *_rectMapping;
    NSLayoutRect *_containerRect;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) Class superclass;


+(id)ruleWithVisualFormat:(id)arg0 options:(NSUInteger)arg1 metrics:(id)arg2 rects:(id)arg3 containerRect:(id)arg4 ;
+(id)ruleWithVisualFormat:(id)arg0 options:(NSUInteger)arg1 metrics:(id)arg2 views:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)makeChildRules;
-(void)dealloc;


@end


#endif