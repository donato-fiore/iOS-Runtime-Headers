// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPTRIPPREVIEWTEXTCONFIGURATION_H
#define CPTRIPPREVIEWTEXTCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPTripPreviewTextConfiguration : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *additionalRoutesButtonTitle; // ivar: _additionalRoutesButtonTitle
@property (readonly, copy, nonatomic) NSString *overviewButtonTitle; // ivar: _overviewButtonTitle
@property (readonly, copy, nonatomic) NSString *startButtonTitle; // ivar: _startButtonTitle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartButtonTitle:(id)arg0 additionalRoutesButtonTitle:(id)arg1 overviewButtonTitle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif