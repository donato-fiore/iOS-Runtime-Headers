// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFILEACCESSDIALOGRESPONSE_H
#define WFFILEACCESSDIALOGRESPONSE_H

@class WFDialogResponse, NSError;
@protocol NSSecureCoding;



@interface WFFileAccessDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger fileResponseCode; // ivar: _fileResponseCode


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileResponseCode:(NSUInteger)arg0 error:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif