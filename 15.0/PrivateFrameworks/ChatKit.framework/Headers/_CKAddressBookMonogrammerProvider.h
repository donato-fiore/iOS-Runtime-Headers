// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CKADDRESSBOOKMONOGRAMMERPROVIDER_H
#define _CKADDRESSBOOKMONOGRAMMERPROVIDER_H

@class NSString;
@protocol CKAddressBookMonogrammerProvider;

#import <Foundation/Foundation.h>


@interface _CKAddressBookMonogrammerProvider : NSObject <CKAddressBookMonogrammerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)monogrammerForStyle:(NSInteger)arg0 diameter:(CGFloat)arg1 ;


@end


#endif