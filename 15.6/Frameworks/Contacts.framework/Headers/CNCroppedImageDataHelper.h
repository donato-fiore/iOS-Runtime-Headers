// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCROPPEDIMAGEDATAHELPER_H
#define CNCROPPEDIMAGEDATAHELPER_H


#import <Foundation/Foundation.h>

#import "CNContactStore.h"

@interface CNCroppedImageDataHelper : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(BOOL)croppedImageDataAvailableForContact:(id)arg0 ;
+(id)descriptorForRequiredKeys;
-(id)croppedImageDataForContact:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 ;
-(id)squareImageData:(id)arg0 ;


@end


#endif