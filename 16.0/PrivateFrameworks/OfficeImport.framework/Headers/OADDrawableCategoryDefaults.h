// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADDRAWABLECATEGORYDEFAULTS_H
#define OADDRAWABLECATEGORYDEFAULTS_H


#import <Foundation/Foundation.h>

#import "OADShapeProperties.h"
#import "OADTextBodyProperties.h"
#import "OADTextListStyle.h"

@interface OADDrawableCategoryDefaults : NSObject {
    OADShapeProperties *mShapeProperties;
    OADTextBodyProperties *mTextBodyProperties;
    OADTextListStyle *mTextListStyle;
}




-(id)description;
-(id)init;
-(id)initWithDefaults;
-(id)shapeProperties;
-(id)textBodyProperties;
-(id)textListStyle;
-(void)setShapeProperties:(id)arg0 ;
-(void)setTextBodyProperties:(id)arg0 ;
-(void)setTextListStyle:(id)arg0 ;


@end


#endif