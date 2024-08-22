// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSMESSAGERICHLINKLAYOUT_H
#define MSMESSAGERICHLINKLAYOUT_H

@class LPLinkMetadata;
@protocol NSSecureCoding;


#import "MSMessageTemplateLayout.h"

@interface MSMessageRichLinkLayout : MSMessageTemplateLayout <NSSecureCoding>



@property (readonly, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata


+(BOOL)supportsSecureCoding;
-(id)_sanitizedCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLinkMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCaption:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageSubtitle:(id)arg0 ;
-(void)setImageTitle:(id)arg0 ;
-(void)setMediaFileURL:(id)arg0 ;
-(void)setSubcaption:(id)arg0 ;
-(void)setTrailingCaption:(id)arg0 ;
-(void)setTrailingSubcaption:(id)arg0 ;


@end


#endif