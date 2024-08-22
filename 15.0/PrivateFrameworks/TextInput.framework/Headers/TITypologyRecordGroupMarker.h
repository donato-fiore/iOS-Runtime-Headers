// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPOLOGYRECORDGROUPMARKER_H
#define TITYPOLOGYRECORDGROUPMARKER_H

@class NSString;


#import "TITypologyRecord.h"
#import "TIKeyboardState.h"

@interface TITypologyRecordGroupMarker : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (copy, nonatomic) NSString *textChange; // ivar: _textChange


+(BOOL)supportsSecureCoding;
-(id)currentKeyboardState;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg0 ;


@end


#endif