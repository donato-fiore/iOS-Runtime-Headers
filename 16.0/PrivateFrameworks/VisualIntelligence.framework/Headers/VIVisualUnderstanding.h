// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIVISUALUNDERSTANDING_H
#define VIVISUALUNDERSTANDING_H

@class NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VIAnnotation.h"

@interface VIVisualUnderstanding : NSObject <NSCopying>



@property (readonly, nonatomic) VIAnnotation *annotation; // ivar: _annotation
@property (readonly, nonatomic) NSArray *imageRegions; // ivar: _imageRegions
@property (readonly, nonatomic) NSData *payload; // ivar: _payload


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImageRegions:(id)arg0 annotation:(id)arg1 payload:(id)arg2 ;
-(id)initWithImageRegions:(id)arg0 payload:(id)arg1 ;
-(id)initWithImageRegions:(id)arg0 textBlockAnnotation:(id)arg1 payload:(id)arg2 ;


@end


#endif