// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSADDRESSBOOKMATCH_H
#define WBSADDRESSBOOKMATCH_H

@class NSString, NSDate, NSDictionary;
@protocol WBSFormAutoFillItem, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSAddressBookMatch : NSObject <WBSFormAutoFillItem, NSSecureCoding>

 {
    id *_value;
}


@property (readonly, nonatomic) NSString *completion;
@property (copy, nonatomic) NSDate *dateValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *property; // ivar: _property
@property (copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
+(id)addressBookMatchWithDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 property:(id)arg1 key:(id)arg2 identifier:(id)arg3 ;
-(id)initWithValue:(id)arg0 property:(id)arg1 key:(id)arg2 identifier:(id)arg3 label:(id)arg4 ;
-(id)initWithValue:(id)arg0 property:(id)arg1 key:(id)arg2 identifier:(id)arg3 label:(id)arg4 uniqueID:(id)arg5 ;
-(void)_setValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif