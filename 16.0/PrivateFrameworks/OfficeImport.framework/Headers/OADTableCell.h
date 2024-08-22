// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLECELL_H
#define OADTABLECELL_H


#import <Foundation/Foundation.h>

#import "OADTextBody.h"
#import "OADTableCellProperties.h"

@interface OADTableCell : NSObject {
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}




-(BOOL)horzMerge;
-(BOOL)merge:(int)arg0 ;
-(BOOL)vertMerge;
-(id)description;
-(id)init;
-(id)properties;
-(id)textBody;
-(int)gridSpan;
-(int)leftColumn;
-(int)rowSpan;
-(int)spanAlongDir:(int)arg0 ;
-(int)topRow;
-(void)setGridSpan:(int)arg0 ;
-(void)setHorzMerge:(BOOL)arg0 ;
-(void)setLeftColumn:(int)arg0 ;
-(void)setProperties:(id)arg0 ;
-(void)setRowSpan:(int)arg0 ;
-(void)setTextBody:(id)arg0 ;
-(void)setTopRow:(int)arg0 ;
-(void)setVertMerge:(BOOL)arg0 ;


@end


#endif