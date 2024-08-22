// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADSHAPEGEOMETRY_H
#define OADSHAPEGEOMETRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OADShapeGeometry : NSObject {
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}




-(BOOL)hasAdjustValueAtIndex:(unsigned int)arg0 ;
-(BOOL)isEscher;
-(NSUInteger)adjustValueCount;
-(id)adjustValues;
-(id)description;
-(id)equivalentCustomGeometry;
-(id)init;
-(int)adjustValueAtIndex:(unsigned int)arg0 ;
-(int)type;
-(void)setAdjustValue:(int)arg0 atIndex:(unsigned int)arg1 ;
-(void)setIsEscher:(BOOL)arg0 ;


@end


#endif