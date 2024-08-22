// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDTEXTBOX_H
#define EDTEXTBOX_H


#import <Foundation/Foundation.h>

#import "EDString.h"
#import "EDAlignmentInfo.h"
#import "EDProtection.h"

@interface EDTextBox : NSObject {
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}




+(id)textBox;
-(id)alignmentInfo;
-(id)description;
-(id)protection;
-(id)text;
-(void)setAlignmentInfo:(id)arg0 ;
-(void)setProtection:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif