// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSATTRIBUTEDSTRINGREPLACEMENT_H
#define _NSATTRIBUTEDSTRINGREPLACEMENT_H


#import <Foundation/Foundation.h>


@interface _NSAttributedStringReplacement : NSObject

@property (readonly) id *argument; // ivar: _argument
@property (readonly) NSInteger index; // ivar: _index
@property (readonly) NSInteger replacementKind; // ivar: _replacementKind
@property (readonly) _NSRange replacementRangeInResult; // ivar: _replacementRangeInResult
@property (readonly) _NSRange specifierRangeInFormatString; // ivar: _specifierRangeInFormatString


+(id)_replacementsFromMetadataArray:(id)arg0 ;
-(id)_initWithMetadata:(id)arg0 ;
-(void)dealloc;


@end


#endif