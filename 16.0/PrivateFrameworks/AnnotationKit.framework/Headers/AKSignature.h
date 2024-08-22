// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKSIGNATURE_H
#define AKSIGNATURE_H

@class PKDrawing, NSString, NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKSignature : NSObject <NSSecureCoding>

 {
    PKDrawing *_drawing;
    *CGPath _path;
    CGRect _strokesBounds;
}


@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property CGFloat baselineOffset; // ivar: _baselineOffset
@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *customDescription; // ivar: _customDescription
@property NSInteger descriptionTag; // ivar: _descriptionTag
@property (readonly) PKDrawing *drawing;
@property (readonly) *CGPath path;
@property (readonly) CGRect pathBounds;
@property BOOL shouldPersist; // ivar: _shouldPersist
@property (retain) NSUUID *uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)accessibilityValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForTesting;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDrawing:(id)arg0 path:(struct CGPath *)arg1 baselineOffset:(CGFloat)arg2 ;
-(id)initWithDrawing:(id)arg0 path:(struct CGPath *)arg1 baselineOffset:(CGFloat)arg2 creationDate:(id)arg3 ;
-(id)initWithDrawing:(id)arg0 path:(struct CGPath *)arg1 baselineOffset:(CGFloat)arg2 creationDate:(id)arg3 descriptionTag:(NSInteger)arg4 customDescription:(id)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif