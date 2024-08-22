// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERCOMPLICATIONLAYOUT_H
#define PRPOSTERCOMPLICATIONLAYOUT_H

@class NSArray, NSString, PRSWidget;
@protocol NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>


@interface PRPosterComplicationLayout : NSObject <NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying>



@property (readonly, copy, nonatomic) NSArray *complications; // ivar: _complications
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) PRSWidget *inlineComplication; // ivar: _inlineComplication
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToComplicationLayout:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInlineComplication:(id)arg0 complications:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif