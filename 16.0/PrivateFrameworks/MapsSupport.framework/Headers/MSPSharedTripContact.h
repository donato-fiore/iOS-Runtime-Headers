// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPSHAREDTRIPCONTACT_H
#define MSPSHAREDTRIPCONTACT_H

@class NSString, CNContact, CNLabeledValue;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSPSharedTripContact : NSObject <NSSecureCoding>

 {
    NSString *_displayName;
    NSString *_originalHandle;
}


@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *handleForIDS;
@property (readonly, nonatomic) BOOL isPhoneNumber;
@property (retain, nonatomic) CNLabeledValue *labeledValue; // ivar: _labeledValue
@property (readonly, nonatomic) NSString *stringValue;


+(BOOL)supportsSecureCoding;
+(id)_propertiesForFetching;
+(id)contactsFromCNContact:(id)arg0 ;
+(id)contactsFromCNContact:(id)arg0 andIdentifiers:(id)arg1 ;
+(id)contactsFromCNContact:(id)arg0 matchingHandles:(id)arg1 ;
+(id)contactsFromHandles:(id)arg0 ;
+(id)contactsFromIDSHandles:(id)arg0 ;
+(void)setAdditionalKeyDescriptorsForContactFetching:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 handle:(id)arg1 ;
-(id)initWithContact:(id)arg0 labeledValue:(id)arg1 ;
-(id)initWithContactHandle:(id)arg0 ;
-(void)_populateFromContactUsingHandle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif