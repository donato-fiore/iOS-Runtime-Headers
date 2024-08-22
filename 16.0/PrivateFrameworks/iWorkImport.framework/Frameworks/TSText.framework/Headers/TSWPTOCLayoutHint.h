// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTOCLAYOUTHINT_H
#define TSWPTOCLAYOUTHINT_H

@class NSString;
@protocol TSDHint;

#import <Foundation/Foundation.h>


@interface TSWPTOCLayoutHint : NSObject <TSDHint>



@property (readonly, nonatomic) _NSRange charRange; // ivar: _charRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize effectiveSize;
@property (readonly, nonatomic) NSObject<TSDHint> *firstChildHint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFirstHint;
@property (readonly, nonatomic) NSObject<TSDHint> *lastChildHint;
@property (readonly, nonatomic) CGSize maximumSize;
@property (readonly) Class superclass;


+(Class)archivedHintClass;
-(BOOL)overlapsWithSelectionPath:(id)arg0 ;
-(id)copyForArchiving;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif