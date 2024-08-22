// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPOSTSHARINGCONTEXT_H
#define CKPOSTSHARINGCONTEXT_H

@class NSString, NSArray;
@protocol NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying;


#import "CKSharingContext.h"

@interface CKPostSharingContext : CKSharingContext <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
-(NSInteger)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif