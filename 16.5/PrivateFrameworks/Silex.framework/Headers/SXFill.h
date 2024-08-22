// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXFILL_H
#define SXFILL_H



#import "SXJSONObject.h"

@interface SXFill : SXJSONObject

@property (readonly, nonatomic) NSUInteger attachment;
@property (readonly, nonatomic) NSUInteger fillMode;
@property (readonly, nonatomic) NSUInteger horizontalAlignment;
@property (readonly, nonatomic) NSUInteger verticalAlignment;


-(NSUInteger)attachmentWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)fillModeWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)horizontalAlignmentWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)verticalAlignmentWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif