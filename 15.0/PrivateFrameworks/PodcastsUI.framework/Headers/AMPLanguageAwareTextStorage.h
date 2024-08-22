// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMPLANGUAGEAWARETEXTSTORAGE_H
#define AMPLANGUAGEAWARETEXTSTORAGE_H

@class NSTextStorage;
@protocol NSTextStorageDelegate, AMPWritingDirectionContentProtocol;

#import <Foundation/Foundation.h>


@interface AMPLanguageAwareTextStorage : NSObject <NSTextStorageDelegate, AMPWritingDirectionContentProtocol>

 {
    ? originalTextStorageDelegate;
    ? languageAwareString;
}


@property (nonatomic, retain) NSTextStorage *textStorage; // ivar: textStorage


-(NSInteger)writingDirectionOfLine:(NSInteger)arg0 maximumLinesShown:(NSInteger)arg1 withWidth:(CGFloat)arg2 lineBreakMode:(NSInteger)arg3 cacheLayoutInfo:(BOOL)arg4 ;
-(id)init;
-(id)initWithTextStorage:(id)arg0 ;
-(id)writingDirectionsQuantities;
-(void)textStorage:(id)arg0 didProcessEditing:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 ;
-(void)textStorage:(id)arg0 willProcessEditing:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 ;


@end


#endif