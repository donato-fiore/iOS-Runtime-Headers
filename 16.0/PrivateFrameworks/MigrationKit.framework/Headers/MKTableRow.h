// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTABLEROW_H
#define MKTABLEROW_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MKTableRow : NSObject

@property (retain, nonatomic) NSArray *cells; // ivar: _cells
@property (retain, nonatomic) NSString *divider; // ivar: _divider
@property (nonatomic) NSInteger totalColumns; // ivar: _totalColumns


+(id)rowWithCells:(id)arg0 ;
+(id)rowWithTitle:(id)arg0 ;
+(id)separatorRow;
-(id)asciiRepresentationUsingColumns:(id)arg0 ;
-(id)csvRepresentation;
-(id)csvSafeValueForCell:(id)arg0 ;
-(id)formattedValueForCell:(id)arg0 ;
-(id)init;
-(int)totalWidthOfColumns:(id)arg0 ;
-(void)adjustColumnsToFit:(id)arg0 ;


@end


#endif