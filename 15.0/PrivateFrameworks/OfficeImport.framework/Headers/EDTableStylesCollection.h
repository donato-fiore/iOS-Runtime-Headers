// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTABLESTYLESCOLLECTION_H
#define EDTABLESTYLESCOLLECTION_H

@class NSString;


#import "EDCollection.h"

@interface EDTableStylesCollection : EDCollection {
    NSString *mDefaultTableStyleName;
    NSString *mDefaultPivotStyleName;
}




-(id)defaultPivotStyle;
-(id)defaultPivotStyleName;
-(id)defaultTableStyle;
-(id)defaultTableStyleName;
-(id)objectWithName:(id)arg0 ;
-(void)setDefaultPivotStyleName:(id)arg0 ;
-(void)setDefaultTableStyleName:(id)arg0 ;


@end


#endif