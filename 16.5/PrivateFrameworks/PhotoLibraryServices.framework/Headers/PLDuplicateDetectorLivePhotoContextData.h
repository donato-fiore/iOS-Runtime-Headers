// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEDETECTORLIVEPHOTOCONTEXTDATA_H
#define PLDUPLICATEDETECTORLIVEPHOTOCONTEXTDATA_H


#import <Foundation/Foundation.h>


@interface PLDuplicateDetectorLivePhotoContextData : NSObject

@property (readonly) NSUInteger hash;
@property BOOL isSharedLibrary; // ivar: _isSharedLibrary
@property short subtype; // ivar: _subtype


+(id)dataWithSubtype:(short)arg0 isSharedLibrary:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif