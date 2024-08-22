// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTOCARCHIVEDLAYOUTHINT_H
#define TSWPTOCARCHIVEDLAYOUTHINT_H

@class TSPObject, NSString;
@protocol TSDArchivedHint, TSDHint;


#import "TSWPTOCLayoutHint.h"

@interface TSWPTOCArchivedLayoutHint : TSPObject <TSDArchivedHint>

 {
    TSWPTOCLayoutHint *_hint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<TSDHint> *hint;
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 hint:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif