// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIUSERDICTIONARYTRANSACTION_H
#define TIUSERDICTIONARYTRANSACTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIUserDictionaryEntryValue.h"

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding>



@property (retain, nonatomic) TIUserDictionaryEntryValue *valueToDelete; // ivar: _valueToDelete
@property (retain, nonatomic) TIUserDictionaryEntryValue *valueToInsert; // ivar: _valueToInsert


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif