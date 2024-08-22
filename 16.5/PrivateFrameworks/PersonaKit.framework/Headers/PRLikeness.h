// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRLIKENESS_H
#define PRLIKENESS_H

@class NSData, NSDate, NSSet, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRLikeness : NSObject <NSSecureCoding>

 {
    *CGImage _staticRepresentation;
    NSData *_staticRepresentationData;
}


@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) CGRect cropRectForBottomLeftOrigin;
@property (nonatomic) CGRect cropRectForTopLeftOrigin; // ivar: _cropRectForTopLeftOrigin
@property (retain, nonatomic) NSSet *dirtyProperties; // ivar: _dirtyProperties
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (retain, nonatomic) NSDate *insertionDate; // ivar: _insertionDate
@property (nonatomic, setter=setCurrent:) BOOL isCurrent; // ivar: _isCurrent
@property (readonly, nonatomic) BOOL isDirty;
@property (retain, nonatomic) NSString *ownerID; // ivar: _ownerID
@property (copy, nonatomic) NSData *recipe; // ivar: _recipe
@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (readonly, nonatomic) NSString *scopeDescription;
@property (retain, nonatomic) NSDate *softExpirationDate; // ivar: _softExpirationDate
@property (nonatomic) NSInteger source; // ivar: _source
@property (retain, nonatomic) NSData *staticRepresentationData;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+(BOOL)supportsSecureCoding;
+(NSUInteger)scopeFromDescription:(id)arg0 ;
+(id)_dateFormatter;
+(id)_photoWithScope:(NSUInteger)arg0 image:(struct CGImage *)arg1 cropRectForTopLeftOrigin:(struct CGRect )arg2 ;
+(id)descriptionForScope:(NSUInteger)arg0 ;
+(id)diddlySquatLikeness;
+(id)likenessWithPropagatedData:(id)arg0 ;
+(id)monogramWithRecipe:(id)arg0 staticRepresentation:(struct CGImage *)arg1 ;
+(id)monogramWithScope:(NSUInteger)arg0 recipe:(id)arg1 staticRepresentation:(struct CGImage *)arg2 ;
+(id)photoWithImage:(struct CGImage *)arg0 ;
+(id)photoWithImage:(struct CGImage *)arg0 cropRect:(struct CGRect )arg1 ;
+(id)photoWithImage:(struct CGImage *)arg0 cropRectForBottomLeftOrigin:(struct CGRect )arg1 ;
+(id)photoWithImage:(struct CGImage *)arg0 cropRectForTopLeftOrigin:(struct CGRect )arg1 ;
+(id)photoWithScope:(NSUInteger)arg0 image:(struct CGImage *)arg1 ;
+(struct CGRect )_flippedRectForRect:(struct CGRect )arg0 relativeToImage:(struct CGImage *)arg1 ;
-(BOOL)isDiddlySquat;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)dataForPropagation;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGImage *)staticRepresentation;
-(struct CGRect )cropRect;
-(void)clearDirtyProperties;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCropRect:(struct CGRect )arg0 ;
-(void)setStaticRepresentation:(struct CGImage *)arg0 ;


@end


#endif