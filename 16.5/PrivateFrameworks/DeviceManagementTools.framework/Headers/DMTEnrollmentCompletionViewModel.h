// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTENROLLMENTCOMPLETIONVIEWMODEL_H
#define DMTENROLLMENTCOMPLETIONVIEWMODEL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMTEnrollmentCompletionViewModel : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly, nonatomic) BOOL hasVerboseDescription;
@property (readonly, copy, nonatomic) NSString *linkButtonTitle; // ivar: _linkButtonTitle
@property (readonly, copy, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *verboseDescriptionText; // ivar: _verboseDescriptionText


+(BOOL)supportsSecureCoding;
+(id)detailTextForEnrollmentFailureWithLocalizedDeviceClass:(id)arg0 ;
+(id)detailTextForSuccessfulEnrollmentWithLocalizedDeviceClass:(id)arg0 organizationName:(id)arg1 organizationType:(NSInteger)arg2 ;
+(id)titleForEnrollmentFailureWithLocalizedDeviceClass:(id)arg0 ;
+(id)verboseDescriptionTextForError:(id)arg0 ;
-(id)initForEnrollmentFailureWithError:(id)arg0 localizedDeviceClass:(id)arg1 ;
-(id)initSuccessfulEnrollmentInOrganizationName:(id)arg0 organizationType:(NSInteger)arg1 localizedDeviceClass:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif