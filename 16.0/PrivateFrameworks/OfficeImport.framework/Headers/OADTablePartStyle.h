// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLEPARTSTYLE_H
#define OADTABLEPARTSTYLE_H


#import <Foundation/Foundation.h>

#import "OADTableTextStyle.h"
#import "OADTableCellStyle.h"

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}




+(id)defaultStyle;
-(id)cellStyle;
-(id)description;
-(id)shallowCopy;
-(id)textStyle;
-(void)applyOverridesFrom:(id)arg0 ;
-(void)setCellStyle:(id)arg0 ;
-(void)setTextStyle:(id)arg0 ;


@end


#endif