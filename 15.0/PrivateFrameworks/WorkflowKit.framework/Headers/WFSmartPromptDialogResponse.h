// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSMARTPROMPTDIALOGRESPONSE_H
#define WFSMARTPROMPTDIALOGRESPONSE_H

@class NSArray;
@protocol NSSecureCoding;


#import "WFRequestAuthorizationDialogResponse.h"

@interface WFSmartPromptDialogResponse : WFRequestAuthorizationDialogResponse <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *promptedStatesData; // ivar: _promptedStatesData


+(BOOL)supportsSecureCoding;
+(id)prepareDeletionAuthorizationDatabaseDataFromConfiguration:(id)arg0 resultCode:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)prepareSmartPromptsDatabaseDataFromConfiguration:(id)arg0 resultCode:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)updatedStatusFromResultCode:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(NSUInteger)arg0 promptedStatesData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif