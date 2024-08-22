// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADTABLECELLSTYLE_H
#define OADTABLECELLSTYLE_H


#import <Foundation/Foundation.h>

#import "OADTableCellBorderStyle.h"
#import "OADFill.h"

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}




+(id)defaultFill;
+(id)defaultStyle;
-(id)borderStyle;
-(id)description;
-(id)fill;
-(id)shallowCopy;
-(void)applyOverridesFrom:(id)arg0 ;
-(void)setBorderStyle:(id)arg0 ;
-(void)setFill:(id)arg0 ;


@end


#endif