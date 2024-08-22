// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSTORAGESTYLER_H
#define TSWPSTORAGESTYLER_H


#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPStorageStyler : NSObject

@property (nonatomic) NSUInteger attributeArrayKind; // ivar: _attributeArrayKind
@property (retain, nonatomic) TSWPStorage *storage; // ivar: _storage


-(id)initWithStorage:(id)arg0 attributeArrayKind:(NSUInteger)arg1 ;
-(id)replacementStyleForStyle:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)applyStyle:(id)arg0 range:(struct _NSRange )arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 ;
-(void)performStylingInRange:(struct _NSRange )arg0 undoTransaction:(struct TSWPStorageTransaction *)arg1 ;


@end


#endif