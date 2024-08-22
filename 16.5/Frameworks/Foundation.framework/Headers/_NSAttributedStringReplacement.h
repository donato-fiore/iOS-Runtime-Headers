// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)initWithIndex:(NSInteger)arg0 specifierRangeInFormatString:(struct _NSRange )arg1 replacementRangeInResult:(struct _NSRange )arg2 replacementKind:(NSInteger)arg3 argument:(id)arg4 ;
-(void)dealloc;


@end


#endif