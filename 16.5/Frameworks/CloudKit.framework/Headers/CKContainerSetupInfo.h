// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTAINERSETUPINFO_H
#define CKCONTAINERSETUPINFO_H

@class NSString, NSArray;
@protocol NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKAccountOverrideInfo.h"
#import "CKContainerID.h"
#import "CKContainerOptions.h"

@interface CKContainerSetupInfo : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountOverrideInfo;
@property (readonly, copy, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, copy, nonatomic) CKContainerOptions *containerOptions; // ivar: _containerOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutAccountInfo;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerID:(id)arg0 options:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(void)_stripAccountInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif