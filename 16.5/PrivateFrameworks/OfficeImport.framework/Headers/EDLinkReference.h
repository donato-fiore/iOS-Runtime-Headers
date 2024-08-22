// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDLINKREFERENCE_H
#define EDLINKREFERENCE_H


#import <Foundation/Foundation.h>


@interface EDLinkReference : NSObject {
    NSUInteger mLinkIndex;
    NSUInteger mFirstSheetIndex;
    NSUInteger mLastSheetIndex;
}




+(id)linkReferenceWithLinkIndex:(NSUInteger)arg0 firstSheetIndex:(NSUInteger)arg1 lastSheetIndex:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLinkReference:(id)arg0 ;
-(BOOL)isWorkbookLevelReference;
-(NSUInteger)firstSheetIndex;
-(NSUInteger)hash;
-(NSUInteger)lastSheetIndex;
-(NSUInteger)linkIndex;
-(id)description;
-(id)init;
-(id)initWithLinkIndex:(NSUInteger)arg0 firstSheetIndex:(NSUInteger)arg1 lastSheetIndex:(NSUInteger)arg2 ;
-(void)setFirstSheetIndex:(NSUInteger)arg0 ;
-(void)setLastSheetIndex:(NSUInteger)arg0 ;
-(void)setLinkIndex:(NSUInteger)arg0 ;


@end


#endif