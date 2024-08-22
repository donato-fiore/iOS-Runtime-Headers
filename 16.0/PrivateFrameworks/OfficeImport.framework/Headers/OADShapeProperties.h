// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADSHAPEPROPERTIES_H
#define OADSHAPEPROPERTIES_H



#import "OADGraphicProperties.h"

@interface OADShapeProperties : OADGraphicProperties {
    BOOL mIsTextBox;
}




+(id)defaultProperties;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTextBox;
-(NSUInteger)hash;
-(void)setIsTextBox:(BOOL)arg0 ;


@end


#endif