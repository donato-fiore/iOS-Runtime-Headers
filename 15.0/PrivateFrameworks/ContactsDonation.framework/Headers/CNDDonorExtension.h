// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNDDONOREXTENSION_H
#define CNDDONOREXTENSION_H

@class NSExtension;
@protocol CNDonationExtensionLogger;

#import <Foundation/Foundation.h>


@interface CNDDonorExtension : NSObject

@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSObject<CNDonationExtensionLogger> *logger; // ivar: _logger


-(id)description;
-(id)initWithExtension:(id)arg0 ;
-(id)initWithExtension:(id)arg0 logger:(id)arg1 ;
-(void)redonateAllValuesWithReason:(NSUInteger)arg0 ;
-(void)renewExpirationDateForDonatedValue:(id)arg0 acknowledgementHandler:(id)arg1 ;


@end


#endif