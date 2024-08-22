// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXITEMPROVIDERCOPYINGLOADOPERATOR_H
#define _EXITEMPROVIDERCOPYINGLOADOPERATOR_H

@class NSString, NSItemProvider, NSDictionary;
@protocol _EXItemProviderLoading;

#import <Foundation/Foundation.h>


@interface _EXItemProviderCopyingLoadOperator : NSObject <_EXItemProviderLoading>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? destinationProcessAuditToken; // ivar: _destinationProcessAuditToken
@property (readonly) NSUInteger hash;
@property (nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSDictionary *loadedItems; // ivar: _loadedItems
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_loadItemsForTypeIdentifiers:(id)arg0 auditToken:(struct ? )arg1 itemProvider:(id)arg2 ;
-(id)_sandboxedResourceForItemIfNeeded:(id)arg0 auditToken:(struct ? )arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemProvider:(id)arg0 destinationProcessAuditToken:(struct ? )arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)loadItemForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 expectedValueClass:(unk)arg2 options:(Class)arg3  ;
// -(void)loadPreviewImageWithCompletionHandler:(id)arg0 expectedValueClass:(unk)arg1 options:(Class)arg2  ;


@end


#endif