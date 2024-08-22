// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODDLAYOUTNODE_H
#define ODDLAYOUTNODE_H



#import "ODDLayoutObjectList.h"
#import "ODDLayoutVariablePropertySet.h"

@interface ODDLayoutNode : ODDLayoutObjectList {
    ODDLayoutVariablePropertySet *mVariableList;
}




-(id)description;
-(id)variableList;
-(void)setVariableList:(id)arg0 ;


@end


#endif