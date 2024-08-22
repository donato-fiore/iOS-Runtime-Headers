// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELL_H
#define TSTCELL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTCell : NSObject <NSCopying>

 {
    ? mPrivate;
}




+(id)cell;
-(BOOL)isCellContentsEqualToCell:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCell:(id)arg0 ;
-(id)initWithStorageRef:(struct TSTCellStorage *)arg0 dataStore:(id)arg1 ;
-(void)dealloc;
-(void)inflateFromStorageRef:(struct TSTCellStorage *)arg0 dataStore:(id)arg1 ;
-(void)inflateFromStorageRef:(struct TSTCellStorage *)arg0 dataStore:(id)arg1 suppressingFormulaInflation:(BOOL)arg2 ;
-(void)writeToStorageRef:(struct TSTCellStorage *)arg0 ;


@end


#endif