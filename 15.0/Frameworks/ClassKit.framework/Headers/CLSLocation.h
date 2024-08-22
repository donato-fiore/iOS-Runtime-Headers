// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSLOCATION_H
#define CLSLOCATION_H

@class NSString, NSPersonNameComponents;
@protocol CLSContactsSearchable;


#import "CLSObject.h"

@interface CLSLocation : CLSObject <CLSContactsSearchable>



@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property BOOL isEditable; // ivar: _isEditable
@property (copy, nonatomic) NSString *locationName; // ivar: _locationName
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (nonatomic) NSInteger sourceType; // ivar: _sourceType


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocationID:(id)arg0 name:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif