// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSFONTSPECIFICATIONFONTFEATURE_H
#define CHSFONTSPECIFICATIONFONTFEATURE_H

@class NSString;
@protocol BSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CHSFontSpecificationFontFeature : NSObject <BSXPCSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger selector; // ivar: _selector
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 selector:(NSInteger)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif