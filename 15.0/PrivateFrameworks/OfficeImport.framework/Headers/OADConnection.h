// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADCONNECTION_H
#define OADCONNECTION_H


#import <Foundation/Foundation.h>


@interface OADConnection : NSObject {
    unsigned int mDrawableId;
    int mLocationIndex;
}




-(id)description;
-(int)locationIndex;
-(unsigned int)drawableId;
-(void)setDrawableId:(unsigned int)arg0 ;
-(void)setLocationIndex:(int)arg0 ;


@end


#endif