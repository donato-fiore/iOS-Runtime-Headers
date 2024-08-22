// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODDCHOOSE_H
#define ODDCHOOSE_H

@class NSMutableArray;


#import "ODDLayoutObject.h"
#import "ODDOtherwise.h"

@interface ODDChoose : ODDLayoutObject {
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}




-(id)description;
-(id)init;
-(id)otherwise;
-(id)whens;
-(void)addWhen:(id)arg0 ;
-(void)setOtherwise:(id)arg0 ;


@end


#endif