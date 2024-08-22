// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODDLAYOUTVARIABLEPROPERTYSET_H
#define ODDLAYOUTVARIABLEPROPERTYSET_H



#import "OADProperties.h"

@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}




+(id)defaultProperties;
-(BOOL)hasDirection;
-(id)description;
-(id)initWithDefaults;
-(int)direction;
-(void)setDirection:(int)arg0 ;


@end


#endif