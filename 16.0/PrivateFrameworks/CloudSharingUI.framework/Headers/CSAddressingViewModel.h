// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSADDRESSINGVIEWMODEL_H
#define CSADDRESSINGVIEWMODEL_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CSAddressingViewModel : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *headerImageData; // ivar: _headerImageData
@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (retain, nonatomic) NSString *loadingText; // ivar: _loadingText
@property (retain, nonatomic) NSString *primaryButtonText; // ivar: _primaryButtonText
@property (retain, nonatomic) NSString *secondaryButtonText; // ivar: _secondaryButtonText
@property (retain, nonatomic) NSString *supplementaryText; // ivar: _supplementaryText
@property (retain, nonatomic) NSString *userInfoText; // ivar: _userInfoText


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeaderImageData:(id)arg0 headerTitle:(id)arg1 loadingText:(id)arg2 supplementaryText:(id)arg3 userInfoText:(id)arg4 primaryButtonText:(id)arg5 secondaryButtonText:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif