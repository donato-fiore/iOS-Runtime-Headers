// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHOMESCREENSILHOUETTELAYOUT_H
#define SBSHOMESCREENSILHOUETTELAYOUT_H

@class NSString, NSArray;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "SBSHomeScreenRectangleSilhouette.h"

@interface SBSHomeScreenSilhouetteLayout : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SBSHomeScreenRectangleSilhouette *dock; // ivar: _dock
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *icons; // ivar: _icons
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIcons:(id)arg0 dock:(id)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif