// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDPROPERTYSOURCEFORMODIFYPROTOTYPECHANGE_H
#define TSDPROPERTYSOURCEFORMODIFYPROTOTYPECHANGE_H

@class NSString;
@protocol TSSPropertySource;

#import <Foundation/Foundation.h>

#import "TSDModifyPrototypeChange.h"

@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource>

 {
    TSDModifyPrototypeChange *mChange;
    BOOL mAfterChange;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsProperty:(int)arg0 ;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)initWithPrototypeChange:(id)arg0 afterChange:(BOOL)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)p_propertyMap;
-(int)intValueForProperty:(int)arg0 ;


@end


#endif