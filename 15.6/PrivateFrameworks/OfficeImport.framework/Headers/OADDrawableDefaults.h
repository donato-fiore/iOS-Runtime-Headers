// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADDRAWABLEDEFAULTS_H
#define OADDRAWABLEDEFAULTS_H


#import <Foundation/Foundation.h>

#import "OADDrawableCategoryDefaults.h"

@interface OADDrawableDefaults : NSObject

@property (retain, nonatomic) OADDrawableCategoryDefaults *lineDefaults; // ivar: mLineDefaults
@property (retain, nonatomic) OADDrawableCategoryDefaults *shapeDefaults; // ivar: mShapeDefaults
@property (retain, nonatomic) OADDrawableCategoryDefaults *textDefaults; // ivar: mTextDefaults


-(BOOL)isEmpty;
-(id)addLineDefaults;
-(id)addShapeDefaults;
-(id)addTextDefaults;
-(id)description;
-(void)addDefaults;


@end


#endif