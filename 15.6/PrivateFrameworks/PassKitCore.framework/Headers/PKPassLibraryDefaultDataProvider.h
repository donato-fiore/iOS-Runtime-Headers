// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSLIBRARYDEFAULTDATAPROVIDER_H
#define PKPASSLIBRARYDEFAULTDATAPROVIDER_H

@class NSString;
@protocol PKPassLibraryDataProvider;

#import <Foundation/Foundation.h>

#import "PKPassLibrary.h"

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider>

 {
    PKPassLibrary *_library;
}


@property (readonly, nonatomic) BOOL canAddPaymentPass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg0 ;
-(NSUInteger)countOfPasses;
-(id)init;
-(id)initWithPassLibrary:(id)arg0 ;
-(id)passWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(id)passWithUniqueID:(id)arg0 ;
-(id)passes;
-(id)paymentPasses;
-(id)peerPaymentPassUniqueID;
-(void)removePass:(id)arg0 ;


@end


#endif