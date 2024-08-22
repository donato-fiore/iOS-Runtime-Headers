// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDHYPERLINK_H
#define EDHYPERLINK_H


#import <Foundation/Foundation.h>

#import "EDString.h"
#import "EDReference.h"

@interface EDHyperlink : NSObject {
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}




+(id)hyperlink;
-(id)description;
-(id)descriptionText;
-(id)dosPath;
-(id)path;
-(id)reference;
-(id)textMark;
-(id)toolTip;
-(int)type;
-(void)setDescriptionText:(id)arg0 ;
-(void)setDosPath:(id)arg0 ;
-(void)setPath:(id)arg0 ;
-(void)setReference:(id)arg0 ;
-(void)setTextMark:(id)arg0 ;
-(void)setToolTip:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif