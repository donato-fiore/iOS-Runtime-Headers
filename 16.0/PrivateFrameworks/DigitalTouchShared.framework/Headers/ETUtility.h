// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETUTILITY_H
#define ETUTILITY_H


#import <Foundation/Foundation.h>


@interface ETUtility : NSObject



+(BOOL)isRetailDemo;
+(BOOL)shouldArchiveSentMessages;
+(NSInteger)lastInteractiveZoomLevel;
+(id)dateFormatWithMilliseconds:(id)arg0 ;
+(id)destinationFromMessageIdentifier:(id)arg0 keepPrefix:(BOOL)arg1 ;
+(id)imageWithEllipseDiameter:(CGFloat)arg0 strokeWidth:(CGFloat)arg1 strokeColor:(id)arg2 fillDiameter:(CGFloat)arg3 fillColor:(id)arg4 edgeOverlap:(CGFloat)arg5 ;
+(id)removePrefixFromDestination:(id)arg0 ;


@end


#endif