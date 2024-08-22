// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INIMAGENOTECONTENT_H
#define INIMAGENOTECONTENT_H

@class NSString;
@protocol INCacheableContainer, INImageProxyInjecting, NSSecureCoding, NSCopying;


#import "INNoteContent.h"
#import "INImage.h"

@interface INImageNoteContent : INNoteContent <INCacheableContainer, INImageProxyInjecting, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=_setImage:) INImage *image; // ivar: _image
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithImage:(id)arg0 ;
-(id)_intents_cacheableObjects;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif