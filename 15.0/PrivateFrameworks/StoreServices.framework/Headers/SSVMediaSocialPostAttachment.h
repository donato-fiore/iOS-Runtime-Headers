// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVMEDIASOCIALPOSTATTACHMENT_H
#define SSVMEDIASOCIALPOSTATTACHMENT_H

@class NSMutableDictionary, NSString, NSArray, NSData, NSURL;
@protocol NSCopying, SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSVMediaSocialPostAttachment : NSObject <NSCopying, SSXPCCoding>

 {
    NSMutableDictionary *_childAttachments;
}


@property (copy, nonatomic) NSString *UTI; // ivar: _uti
@property (copy, nonatomic) NSString *albumIdentifier; // ivar: _albumIdentifier
@property (copy, nonatomic) NSArray *artists; // ivar: _artists
@property (copy, nonatomic) NSData *assetData; // ivar: _assetData
@property (copy, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (copy, nonatomic) NSString *attachmentDescription; // ivar: _attachmentDescription
@property (readonly, nonatomic) NSInteger attachmentType;
@property (copy, nonatomic) NSString *categoryName; // ivar: _categoryName
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deletesAssetWhenFinished; // ivar: _deletesAssetWhenFinished
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent; // ivar: _explicitContent
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat previewFrameTimestamp; // ivar: _previewFrameTimestamp
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)childAttachmentForRelationship:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)enumerateChildAttachmentsUsingBlock:(id)arg0 ;
-(void)setChildAttachment:(id)arg0 forRelationship:(id)arg1 ;


@end


#endif