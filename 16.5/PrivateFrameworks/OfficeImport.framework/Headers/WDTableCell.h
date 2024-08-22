// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDTABLECELL_H
#define WDTABLECELL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WDTableCellProperties.h"
#import "WDText.h"
#import "WDTableRow.h"

@interface WDTableCell : NSObject {
    NSUInteger mIndex;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    BOOL mUseTrackedProperties;
}


@property (readonly, weak) WDTableRow *row; // ivar: mRow


-(BOOL)useTrackedProperties;
-(NSInteger)compareIndex:(id)arg0 ;
-(NSUInteger)index;
-(id)description;
-(id)identifier;
-(id)initWithRow:(id)arg0 at:(NSUInteger)arg1 ;
-(id)properties;
-(id)text;
-(void)clearProperties;
-(void)setIdentifier:(id)arg0 ;
-(void)setUseTrackedProperties:(BOOL)arg0 ;


@end


#endif