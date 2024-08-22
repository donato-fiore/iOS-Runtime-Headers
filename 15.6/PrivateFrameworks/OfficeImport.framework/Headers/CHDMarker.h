// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDMARKER_H
#define CHDMARKER_H


#import <Foundation/Foundation.h>

#import "OADGraphicProperties.h"

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}




-(id)description;
-(id)graphicProperties;
-(id)init;
-(int)style;
-(unsigned int)size;
-(void)setGraphicProperties:(id)arg0 ;
-(void)setSize:(unsigned int)arg0 ;
-(void)setStyle:(int)arg0 ;


@end


#endif