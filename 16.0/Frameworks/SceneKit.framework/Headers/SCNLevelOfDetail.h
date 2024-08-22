// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNLEVELOFDETAIL_H
#define SCNLEVELOFDETAIL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNGeometry.h"

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding>

 {
    *__C3DLOD _lod;
    NSInteger _mode;
    SCNGeometry *_geometry;
}


@property (readonly) SCNGeometry *geometry;
@property (readonly) CGFloat screenSpaceRadius;
@property (readonly) CGFloat worldSpaceDistance;


+(BOOL)supportsSecureCoding;
+(id)levelOfDetailWithGeometry:(id)arg0 screenSpaceRadius:(CGFloat)arg1 ;
+(id)levelOfDetailWithGeometry:(id)arg0 worldSpaceDistance:(CGFloat)arg1 ;
-(*void)__CFObject;
-(NSInteger)thresholdMode;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeometry:(id)arg0 thresholdMode:(NSInteger)arg1 lod:(struct __C3DLOD *)arg2 ;
-(id)initWithGeometry:(id)arg0 thresholdMode:(NSInteger)arg1 thresholdValue:(id)arg2 ;
-(id)thresholdValue;
-(void)_customEncodingOfSCNLevelOfDetail:(id)arg0 ;
-(void)_didDecodeSCNLevelOfDetail:(id)arg0 ;
-(void)_setupWithGeometry:(id)arg0 thresholdMode:(NSInteger)arg1 value:(CGFloat)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif