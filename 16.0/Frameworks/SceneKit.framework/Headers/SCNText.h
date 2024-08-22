// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNTEXT_H
#define SCNTEXT_H

@class UIBezierPath, UIFont, NSString;


#import "SCNGeometry.h"

@interface SCNText : SCNGeometry {
    float _flatness;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    UIBezierPath *_chamferProfile;
    NSInteger _primitiveType;
    id *_string;
    UIFont *_font;
    BOOL _wrapped;
    int _alignmentMode;
    int _truncationMode;
    BOOL _useCustomContainerFrame;
    CGRect _customContainerFrame;
    BOOL __wantsSeparateGeometryElements;
}


@property (copy, nonatomic) NSString *alignmentMode;
@property (copy, nonatomic) UIBezierPath *chamferProfile;
@property (nonatomic) CGFloat chamferRadius;
@property (nonatomic) CGRect containerFrame;
@property (nonatomic) CGFloat extrusionDepth;
@property (nonatomic) CGFloat flatness;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) id *string;
@property (copy, nonatomic) NSString *truncationMode;
@property (nonatomic, getter=isWrapped) BOOL wrapped;


+(BOOL)supportsSecureCoding;
+(id)text;
+(id)textWithString:(id)arg0 extrusionDepth:(CGFloat)arg1 ;
-(?)__createCFObject;
-(BOOL)_wantsSeparateGeometryElements;
-(BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(*CGFloat)arg1 ;
-(CGFloat)discretizedStraightLineMaxLength;
-(NSInteger)primitiveType;
-(id)copy;
-(id)copyAnimationPathForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initPresentationTextGeometryWithTextGeometryRef:(struct __C3DTextGeometry *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextGeometryRef:(struct __C3DTextGeometry *)arg0 ;
-(id)patchFont:(id)arg0 ;
-(id)presentationGeometry;
-(struct ? )params;
-(void)_customDecodingOfSCNText:(id)arg0 ;
-(void)_customEncodingOfSCNText:(id)arg0 ;
-(void)_syncObjCModel:(struct __C3DTextGeometry *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDiscretizedStraightLineMaxLength:(CGFloat)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;
-(void)set_wantsSeparateGeometryElements:(BOOL)arg0 ;


@end


#endif