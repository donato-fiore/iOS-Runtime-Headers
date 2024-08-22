// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODDPOINT_H
#define ODDPOINT_H


#import <Foundation/Foundation.h>

#import "ODDPointPropertySet.h"
#import "OADShapeProperties.h"
#import "OADTextBody.h"

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}




+(void)addConnectionToPoint:(id)arg0 order:(NSUInteger)arg1 array:(*id)arg2 ;
-(id)description;
-(id)init;
-(id)propertySet;
-(id)shapeProperties;
-(id)text;
-(int)type;
-(void)setText:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif