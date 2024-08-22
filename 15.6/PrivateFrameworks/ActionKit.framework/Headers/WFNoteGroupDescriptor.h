// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNOTEGROUPDESCRIPTOR_H
#define WFNOTEGROUPDESCRIPTOR_H

@class NSString, INSpeakableString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSUInteger managedLevel; // ivar: _managedLevel
@property (readonly, nonatomic) INSpeakableString *speakableString; // ivar: _speakableString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptorWithTargetAccountIdentifier:(id)arg0 targetManagedLevel:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNoteGroupSpeakableString:(id)arg0 ;
-(id)initWithNoteGroupSpeakableString:(id)arg0 accountIdentifier:(id)arg1 managedLavel:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif