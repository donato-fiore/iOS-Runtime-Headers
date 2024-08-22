// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLEATTACHMENTSELECTION_H
#define ICTABLEATTACHMENTSELECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ICTableAttachmentSelection : NSObject

@property (copy, nonatomic) NSArray *columns; // ivar: _columns
@property (nonatomic) BOOL draggingText; // ivar: _draggingText
@property (readonly, nonatomic) BOOL isRangeOrSpanningSelection;
@property (nonatomic) BOOL moving; // ivar: _moving
@property (copy, nonatomic) NSArray *rows; // ivar: _rows
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) BOOL valid;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeColumns:(id)arg0 rows:(id)arg1 ;
-(BOOL)removeColumns:(id)arg0 rows:(id)arg1 previousColumns:(id)arg2 previousRows:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)selectCellAtColumn:(id)arg0 row:(id)arg1 ;
-(void)selectCellRangeAtColumns:(id)arg0 rows:(id)arg1 ;
-(void)selectColumns:(id)arg0 ;
-(void)selectRows:(id)arg0 ;
-(void)setSelectionEqualTo:(id)arg0 ;
-(void)unselect;


@end


#endif