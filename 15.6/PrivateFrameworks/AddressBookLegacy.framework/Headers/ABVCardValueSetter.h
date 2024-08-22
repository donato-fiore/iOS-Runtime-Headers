// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABVCARDVALUESETTER_H
#define ABVCARDVALUESETTER_H


#import <Foundation/Foundation.h>


@interface ABVCardValueSetter : NSObject



-(*void)valueForProperty:(unsigned int)arg0 ;
-(BOOL)propertyIsValidForPerson:(unsigned int)arg0 ;
-(BOOL)setImageData:(id)arg0 ;
-(BOOL)setImageData:(id)arg0 cropRectX:(int)arg1 cropRectY:(int)arg2 cropRectWidth:(int)arg3 cropRectHeight:(int)arg4 ;
-(BOOL)setValue:(*void)arg0 forProperty:(unsigned int)arg1 ;
-(id)fullName;
-(id)imageData;
-(void)setValueInTemporaryCache:(id)arg0 forProperty:(unsigned int)arg1 ;


@end


#endif