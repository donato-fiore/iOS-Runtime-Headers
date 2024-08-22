// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHOMESCREENRECTANGLESILHOUETTE_H
#define SBSHOMESCREENRECTANGLESILHOUETTE_H

@class NSString;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface SBSHomeScreenRectangleSilhouette : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSCoding>



@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif