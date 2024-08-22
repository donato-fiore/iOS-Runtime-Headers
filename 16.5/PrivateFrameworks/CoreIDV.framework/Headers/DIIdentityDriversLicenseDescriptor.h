// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIIDENTITYDRIVERSLICENSEDESCRIPTOR_H
#define DIIDENTITYDRIVERSLICENSEDESCRIPTOR_H

@class NSString, NSArray, NSMutableDictionary;
@protocol DIIdentityDocumentDescriptor;

#import <Foundation/Foundation.h>


@interface DIIdentityDriversLicenseDescriptor : NSObject <DIIdentityDocumentDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *elements;
@property (readonly, retain) NSMutableDictionary *elementsToIntentToStore; // ivar: _elementsToIntentToStore
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)intentToStoreForElement:(id)arg0 ;
-(void)addElements:(id)arg0 withIntentToStore:(id)arg1 ;


@end


#endif