// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCOFFERMETADATA_H
#define ASCOFFERMETADATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCOfferMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isIcon) BOOL icon;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isProgress) BOOL progress;
@property (readonly, nonatomic, getter=isText) BOOL text;


+(BOOL)supportsSecureCoding;
+(id)emptyMetadata;
+(id)iconMetadataWithImageName:(id)arg0 animationName:(id)arg1 ;
+(id)indeterminateProgressMetadata;
+(id)placeholderMetadata;
+(id)progressMetadataWithValue:(CGFloat)arg0 ;
+(id)redownloadMetadata;
+(id)textMetadataWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif