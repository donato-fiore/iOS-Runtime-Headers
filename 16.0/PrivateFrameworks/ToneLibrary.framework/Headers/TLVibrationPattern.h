// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLVIBRATIONPATTERN_H
#define TLVIBRATIONPATTERN_H

@class NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TLVibrationPattern : NSObject {
    NSDictionary *_propertyListRepresentation;
    NSMutableArray *_complexPatternDescription;
}


@property (readonly, nonatomic) id *_artificiallyRepeatingPropertyListRepresentation;
@property (retain, nonatomic) id *contextObject; // ivar: _contextObject
@property (readonly, nonatomic) id *propertyListRepresentation;


+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg0 ;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(CGFloat)arg0 ;
+(id)noneVibrationPattern;
+(id)simpleVibrationPatternWithVibrationDuration:(CGFloat)arg0 pauseDuration:(CGFloat)arg1 ;
-(CGFloat)_computedDuration;
-(id)_initWithPropertyListRepresentation:(id)arg0 skipValidation:(BOOL)arg1 ;
-(id)init;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(void)appendVibrationComponentWithDuration:(CGFloat)arg0 isPause:(BOOL)arg1 ;


@end


#endif