// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDRAWINGACTION_H
#define CMDRAWINGACTION_H


#import <Foundation/Foundation.h>


@interface CMDrawingAction : NSObject {
    int _type;
    id *_value;
    float _floatValue;
}




-(float)floatValue;
-(id)description;
-(id)initWithType:(int)arg0 andFloatValue:(float)arg1 ;
-(id)initWithType:(int)arg0 andValue:(id)arg1 ;
-(id)value;
-(int)type;
-(void)dealloc;


@end


#endif