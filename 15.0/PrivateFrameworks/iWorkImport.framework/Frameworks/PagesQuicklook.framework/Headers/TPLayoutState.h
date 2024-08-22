// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPLAYOUTSTATE_H
#define TPLAYOUTSTATE_H

@class NSSet, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TPLayoutState : NSObject <NSCopying>



@property (nonatomic) NSUInteger bodyLength; // ivar: _bodyLength
@property (nonatomic) NSUInteger documentPageIndex; // ivar: _documentPageIndex
@property (nonatomic) NSUInteger lastPageCount; // ivar: _lastPageCount
@property (copy, nonatomic) NSSet *missingFonts; // ivar: _missingFonts
@property (copy, nonatomic) NSArray *sectionHints; // ivar: _sectionHints
@property (nonatomic) NSUInteger sectionIndex; // ivar: _sectionIndex
@property (nonatomic) NSUInteger sectionPageIndex; // ivar: _sectionPageIndex


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLayoutState:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedLayoutStateInContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)reset;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 ;


@end


#endif