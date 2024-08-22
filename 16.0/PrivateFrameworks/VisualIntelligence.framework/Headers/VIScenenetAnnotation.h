// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VISCENENETANNOTATION_H
#define VISCENENETANNOTATION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VIScenenetAnnotation : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *annotations; // ivar: _annotations
@property (readonly, nonatomic) NSUInteger revision; // ivar: _revision


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAnnotations:(id)arg0 revision:(NSUInteger)arg1 ;


@end


#endif