// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTGLOBALCINEMATOGRAPHYMETADATA_H
#define PTGLOBALCINEMATOGRAPHYMETADATA_H

@class NSString;
@protocol PTSerializable;

#import <Foundation/Foundation.h>


@interface PTGlobalCinematographyMetadata : NSObject <PTSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) unsigned int minorVersion; // ivar: _minorVersion
@property (readonly) Class superclass;


+(id)objectFromData:(id)arg0 ;
-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned int)arg0 minorVersion:(unsigned int)arg1 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;


@end


#endif