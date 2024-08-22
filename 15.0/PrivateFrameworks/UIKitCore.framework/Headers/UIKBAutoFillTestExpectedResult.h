// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBAUTOFILLTESTEXPECTEDRESULT_H
#define UIKBAUTOFILLTESTEXPECTEDRESULT_H

@class NSMutableDictionary;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface UIKBAutoFillTestExpectedResult : NSObject <NSCoding>

 {
    NSMutableDictionary *_textFieldTagToTextFieldType;
}


@property (nonatomic) NSInteger formType; // ivar: _formType


-(NSInteger)typeForTextFieldWithTag:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setType:(NSInteger)arg0 forTextFieldWithTag:(NSInteger)arg1 ;


@end


#endif