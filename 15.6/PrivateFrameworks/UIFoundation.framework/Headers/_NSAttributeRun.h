// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSATTRIBUTERUN_H
#define _NSATTRIBUTERUN_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _NSAttributeRun : NSObject <NSCopying>

 {
    _NSRange _range;
    NSMutableArray *_attributesArray;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTextStorage:(id)arg0 range:(struct _NSRange )arg1 ;
-(struct _NSRange )range;
-(void)dealloc;
-(void)restoreAttributesOfTextStorage:(id)arg0 ;


@end


#endif