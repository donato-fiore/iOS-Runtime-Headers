// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSFACEINFORMATION_H
#define CLSFACEINFORMATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CLSFaceInformation : NSObject

@property (readonly) BOOL faceIsGood; // ivar: _faceIsGood
@property (readonly) BOOL faceIsOk; // ivar: _faceIsOk
@property (readonly) CGFloat faceQuality; // ivar: _faceQuality
@property (readonly) CGFloat faceSize; // ivar: _faceSize
@property (readonly) BOOL faceSizeIsGood; // ivar: _faceSizeIsGood
@property (readonly) BOOL isHiddenPerson; // ivar: _isHiddenPerson
@property (readonly) BOOL isKnownPerson; // ivar: _isKnownPerson
@property (readonly) NSArray *traits; // ivar: _traits


+(id)_traitsFromTraitsPropertyListRepresentation:(id)arg0 ;
-(id)_initWithFaceSize:(CGFloat)arg0 faceQuality:(CGFloat)arg1 isKnownPerson:(BOOL)arg2 isHiddenPerson:(BOOL)arg3 faceSizeIsGood:(BOOL)arg4 faceIsGood:(BOOL)arg5 faceIsOk:(BOOL)arg6 traits:(id)arg7 ;
-(id)_propertyListRepresentationOfTraits;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initForHiddenPersonWithFaceSize:(CGFloat)arg0 faceQuality:(CGFloat)arg1 faceSizeIsGood:(BOOL)arg2 faceIsGood:(BOOL)arg3 faceIsOk:(BOOL)arg4 traits:(id)arg5 ;
-(id)initForKnownPersonWithFaceSize:(CGFloat)arg0 faceQuality:(CGFloat)arg1 faceSizeIsGood:(BOOL)arg2 faceIsGood:(BOOL)arg3 faceIsOk:(BOOL)arg4 traits:(id)arg5 ;
-(id)initForUnknownPersonWithFaceSize:(CGFloat)arg0 faceQuality:(CGFloat)arg1 faceSizeIsGood:(BOOL)arg2 faceIsGood:(BOOL)arg3 faceIsOk:(BOOL)arg4 traits:(id)arg5 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif