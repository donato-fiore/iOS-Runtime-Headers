// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCONTACTPICKERITEM_H
#define PKCONTACTPICKERITEM_H

@class NSMutableSet, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKContactPickerItem : NSObject <NSSecureCoding>

 {
    NSMutableSet *_acceptedValues;
}


@property (readonly, nonatomic) NSArray *alternativeAcceptedValues; // ivar: _alternativeAcceptedValues
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *submissionValue; // ivar: _submissionValue


+(BOOL)supportsSecureCoding;
-(BOOL)isValueAccepted:(id)arg0 ;
-(id)acceptedValues;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif