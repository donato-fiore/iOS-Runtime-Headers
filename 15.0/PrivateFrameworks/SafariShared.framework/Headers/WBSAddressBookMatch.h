// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSADDRESSBOOKMATCH_H
#define WBSADDRESSBOOKMATCH_H

@class NSDate, NSDictionary, NSString;


#import "WBSFormAutoFillItem.h"

@interface WBSAddressBookMatch : WBSFormAutoFillItem {
    id *_value;
}


@property (copy, nonatomic) NSDate *dateValue;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *property; // ivar: _property
@property (copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(id)addressBookMatchWithDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)completion;
-(id)description;
-(id)initWithValue:(id)arg0 property:(id)arg1 key:(id)arg2 identifier:(id)arg3 ;
-(id)initWithValue:(id)arg0 property:(id)arg1 key:(id)arg2 identifier:(id)arg3 label:(id)arg4 ;
-(id)initWithValue:(id)arg0 property:(id)arg1 key:(id)arg2 identifier:(id)arg3 label:(id)arg4 uniqueID:(id)arg5 ;
-(void)_setValue:(id)arg0 ;


@end


#endif