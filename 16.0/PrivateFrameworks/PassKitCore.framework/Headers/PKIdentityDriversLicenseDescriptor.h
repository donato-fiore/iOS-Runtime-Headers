// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIDENTITYDRIVERSLICENSEDESCRIPTOR_H
#define PKIDENTITYDRIVERSLICENSEDESCRIPTOR_H

@class NSString, NSArray, DIIdentityDriversLicenseDescriptor;
@protocol PKIdentityDocumentDescriptor;

#import <Foundation/Foundation.h>


@interface PKIdentityDriversLicenseDescriptor : NSObject <PKIdentityDocumentDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *elements;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) DIIdentityDriversLicenseDescriptor *wrapped; // ivar: _wrapped


-(id)asDIIdentityDriversLicenseDescriptor;
-(id)init;
-(id)initWithDIIdentityDriversLicenseDescriptor:(id)arg0 ;
-(id)intentToStoreForElement:(id)arg0 ;
-(void)addElements:(id)arg0 withIntentToStore:(id)arg1 ;


@end


#endif