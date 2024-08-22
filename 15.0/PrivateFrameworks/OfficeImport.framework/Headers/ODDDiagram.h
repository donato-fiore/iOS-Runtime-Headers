// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODDDIAGRAM_H
#define ODDDIAGRAM_H

@class NSArray;


#import "OADDrawable.h"
#import "ODDNodePoint.h"
#import "ODDColorTransform.h"
#import "ODDStyleDefinition.h"

@interface ODDDiagram : OADDrawable {
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
}


@property (retain, nonatomic) NSArray *equivalentDrawables; // ivar: mEquivalentDrawables


-(id)colorTransform;
-(id)description;
-(id)documentPoint;
-(id)init;
-(id)styleDefinition;
-(void)setDocumentPoint:(id)arg0 ;
-(void)setParentTextListStyle:(id)arg0 ;


@end


#endif