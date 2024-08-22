// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTTIMEDRENDERINGMETADATA_H
#define PTTIMEDRENDERINGMETADATA_H

@class NSString;
@protocol PTSerializable;

#import <Foundation/Foundation.h>


@interface PTTimedRenderingMetadata : NSObject <PTSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) unsigned int minorVersion; // ivar: _minorVersion
@property (readonly) Class superclass;


+(id)objectFromData:(id)arg0 ;
+(id)objectFromData:(id)arg0 withMajorVersion:(unsigned int)arg1 minorVersion:(unsigned int)arg2 ;
-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned int)arg0 minorVersion:(unsigned int)arg1 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;
-(void)applyToRenderRequest:(id)arg0 ;


@end


#endif