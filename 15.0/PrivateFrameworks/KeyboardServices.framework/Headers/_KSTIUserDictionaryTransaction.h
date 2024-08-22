// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _KSTIUSERDICTIONARYTRANSACTION_H
#define _KSTIUSERDICTIONARYTRANSACTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_KSTIUserDictionaryEntryValue.h"

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding>



@property (retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToDelete; // ivar: _valueToDelete
@property (retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToInsert; // ivar: _valueToInsert


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif