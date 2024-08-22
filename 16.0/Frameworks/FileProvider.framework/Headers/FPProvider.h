// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPPROVIDER_H
#define FPPROVIDER_H

@class NSURL, NSString, NSArray;
@protocol NSSecureCoding;


#import "FPProviderDomain.h"
#import "NSFileProviderDomain.h"

@interface FPProvider : FPProviderDomain <NSSecureCoding>



@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSFileProviderDomain *domain;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSURL *storageURL;
@property (readonly, nonatomic) NSArray *supportedSortDescriptors; // ivar: _supportedSortDescriptors
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)beginMonitoringProviderChangesWithHandler:(id)arg0 ;
+(void)endMonitoringProviderChanges:(id)arg0 ;
+(void)fetchProviderForItem:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedTitleForSortDescriptor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif