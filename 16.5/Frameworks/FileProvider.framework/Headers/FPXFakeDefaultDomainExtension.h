// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPXFAKEDEFAULTDOMAINEXTENSION_H
#define FPXFAKEDEFAULTDOMAINEXTENSION_H

@class NSString;
@protocol NSFileProviderReplicatedExtension;

#import <Foundation/Foundation.h>

#import "NSFileProviderDomain.h"

@interface FPXFakeDefaultDomainExtension : NSObject <NSFileProviderReplicatedExtension>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileProviderDomain *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 contents:(id)arg2 options:(NSUInteger)arg3 request:(id)arg4 completionHandler:(id)arg5 ;
-(id)deleteItemWithIdentifier:(id)arg0 baseVersion:(id)arg1 options:(NSUInteger)arg2 request:(id)arg3 completionHandler:(id)arg4 ;
-(id)enumeratorForContainerItemIdentifier:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(id)fetchContentsForItemWithIdentifier:(id)arg0 version:(id)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithDomain:(id)arg0 ;
-(id)itemForIdentifier:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(id)modifyItem:(id)arg0 baseVersion:(id)arg1 changedFields:(NSUInteger)arg2 contents:(id)arg3 options:(NSUInteger)arg4 request:(id)arg5 completionHandler:(id)arg6 ;
-(void)invalidate;


@end


#endif