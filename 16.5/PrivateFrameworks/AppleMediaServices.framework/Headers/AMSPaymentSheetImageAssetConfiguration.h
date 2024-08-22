// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPAYMENTSHEETIMAGEASSETCONFIGURATION_H
#define AMSPAYMENTSHEETIMAGEASSETCONFIGURATION_H

@class NSString;
@protocol AMSPaymentSheetAssetConfiguration;

#import <Foundation/Foundation.h>


@interface AMSPaymentSheetImageAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithFilename:(id)arg0 size:(struct CGSize )arg1 type:(NSInteger)arg2 ;


@end


#endif