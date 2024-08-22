// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXITEMPROVIDEREXTENSIONVENDORLOADOPERATOR_H
#define _EXITEMPROVIDEREXTENSIONVENDORLOADOPERATOR_H

@class NSString, NSUUID;
@protocol _EXItemProviderLoading;

#import <Foundation/Foundation.h>


@interface _EXItemProviderExtensionVendorLoadOperator : NSObject <_EXItemProviderLoading>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSUUID *extensionContextIdentifier; // ivar: _extensionContextIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionContextIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)loadItemForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 expectedValueClass:(unk)arg2 options:(Class)arg3  ;
// -(void)loadPreviewImageWithCompletionHandler:(id)arg0 expectedValueClass:(unk)arg1 options:(Class)arg2  ;


@end


#endif