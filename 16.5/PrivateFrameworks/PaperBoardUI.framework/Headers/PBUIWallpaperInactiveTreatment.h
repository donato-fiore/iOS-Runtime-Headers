// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERINACTIVETREATMENT_H
#define PBUIWALLPAPERINACTIVETREATMENT_H

@class NSString;
@protocol PBUIImageTreatment, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBUIWallpaperInactiveTreatment : NSObject <PBUIImageTreatment, NSSecureCoding>



@property (readonly, nonatomic) BOOL canInterpolateToLowerScales;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)commitToRenderingTree:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)applyToImage:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif