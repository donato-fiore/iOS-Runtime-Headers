// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISDACTIVITYITEMDATA_H
#define UISDACTIVITYITEMDATA_H

@class NSMutableDictionary, NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISDActivityItemData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *attachmentNamesByItem; // ivar: _attachmentNamesByItem
@property (readonly, nonatomic) NSMutableDictionary *dataTypesByItem; // ivar: _dataTypesByItem
@property (retain, nonatomic) NSDictionary *openURLAnnotationsByURL; // ivar: _openURLAnnotationsByURL
@property (readonly, nonatomic) NSMutableDictionary *previewImageDataByItem; // ivar: _previewImageDataByItem
@property (readonly, nonatomic) NSMutableDictionary *previewImagesByItem; // ivar: _previewImagesByItem
@property (retain, nonatomic) NSArray *securityContexts; // ivar: _securityContexts
@property (readonly, nonatomic) NSMutableDictionary *subjectsByItem; // ivar: _subjectsByItem


+(BOOL)supportsSecureCoding;
-(BOOL)canAccessFileURL:(id)arg0 ;
-(id)attachmentNameForItem:(id)arg0 ;
-(id)dataTypeForItem:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)previewImageDataForItem:(id)arg0 ;
-(id)previewImageForItem:(id)arg0 ;
-(id)subjectForItem:(id)arg0 ;
-(void)addAttachmentName:(id)arg0 forItem:(id)arg1 ;
-(void)addDataType:(id)arg0 forItem:(id)arg1 ;
-(void)addPreviewImage:(id)arg0 forItem:(id)arg1 ;
-(void)addPreviewImageData:(id)arg0 forItem:(id)arg1 ;
-(void)addSubject:(id)arg0 forItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif