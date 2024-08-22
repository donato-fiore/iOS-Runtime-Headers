// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUICONTEXTDRAWINGANNOTATION_H
#define AXUICONTEXTDRAWINGANNOTATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXUIContextDrawingAnnotation : NSObject

@property (readonly, nonatomic) CGRect boundingRect; // ivar: _boundingRect
@property (readonly, nonatomic) NSString *label; // ivar: _label


+(id)annotationsForContext:(struct CGContext *)arg0 ;
+(id)contextAnnotationMap;
+(void)addLabel:(id)arg0 boundingRect:(struct CGRect )arg1 withContext:(struct CGContext *)arg2 ;
-(id)description;
-(id)initWithLabel:(id)arg0 boundingRect:(struct CGRect )arg1 ;


@end


#endif