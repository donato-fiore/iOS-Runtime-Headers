// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPHOTO_H
#define NTKPHOTO_H

@class NSURL, NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTKPhoto : NSObject <NSCopying>

 {
    NTKPhotoAnalysis" _analyses;
}


@property (nonatomic) CGRect crop; // ivar: _crop
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (nonatomic) CGFloat irisDuration; // ivar: _irisDuration
@property (nonatomic) CGFloat irisStillDisplayTime; // ivar: _irisStillDisplayTime
@property (copy, nonatomic) NSURL *irisVideoURL; // ivar: _irisVideoURL
@property (nonatomic) BOOL isIris; // ivar: _isIris
@property (readonly, nonatomic) BOOL isMissingAnalysis;
@property (copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (nonatomic) CGRect originalCrop; // ivar: _originalCrop
@property (readonly, nonatomic) NSString *uuidFromLocalIdentifierAndModificationDate;


+(id)decodeFromDictionary:(id)arg0 forResourceDirectory:(id)arg1 ;
-(BOOL)isEqualToAsset:(id)arg0 ;
-(BOOL)isEqualToPhoto:(id)arg0 ;
-(id)analysisForAlignment:(NSUInteger)arg0 deviceSizeClass:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsDictionary;
-(id)initWithLegacySidecar:(id)arg0 ;
-(void)setAnalysis:(id)arg0 alignment:(NSUInteger)arg1 deviceSizeClass:(NSUInteger)arg2 ;


@end


#endif