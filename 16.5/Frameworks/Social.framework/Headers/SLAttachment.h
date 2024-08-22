// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLATTACHMENT_H
#define SLATTACHMENT_H

@class NSString, NSItemProvider, NSURL, UIImage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLAttachment : NSObject <NSSecureCoding>

 {
    id *_previewUpdateObserver;
    id *_payloadUpdateObserver;
}


@property (nonatomic) NSInteger downsampleStatus; // ivar: _downsampleStatus
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (readonly, nonatomic) NSInteger itemProviderPreviewType; // ivar: _itemProviderPreviewType
@property (nonatomic) BOOL needsAnotherPreviewGeneration; // ivar: _needsAnotherPreviewGeneration
@property (copy, nonatomic) id *payload; // ivar: _payload
@property (copy, nonatomic) NSURL *payloadSourceFileURL; // ivar: _payloadSourceFileURL
@property (retain, nonatomic) UIImage *previewImage; // ivar: _previewImage
@property NSInteger previewType; // ivar: _previewType
@property (nonatomic) BOOL startedPayloadLoad; // ivar: _startedPayloadLoad
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier


+(BOOL)attachmentTypeRepresentsAnImage:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
-(id)_uniqueIdentifier;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 type:(NSInteger)arg1 previewImage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPreviewUpdateObserverWithBlock:(id)arg0 ;


@end


#endif