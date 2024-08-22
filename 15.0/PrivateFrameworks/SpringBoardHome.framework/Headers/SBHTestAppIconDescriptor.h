// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHTESTAPPICONDESCRIPTOR_H
#define SBHTESTAPPICONDESCRIPTOR_H

@class NSString;
@protocol SBHTestIconDescriptor;

#import <Foundation/Foundation.h>


@interface SBHTestAppIconDescriptor : NSObject <SBHTestIconDescriptor>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sbh_isValidWithError:(*id)arg0 ;
-(NSUInteger)sbh_iconDescriptorType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAppIconBundleIdentifier:(id)arg0 ;


@end


#endif