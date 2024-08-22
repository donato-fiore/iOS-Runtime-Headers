// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDLINK_H
#define EDLINK_H


#import <Foundation/Foundation.h>

#import "EDCollection.h"

@interface EDLink : NSObject {
    int mType;
    EDCollection *mExternalNames;
}




+(id)linkWithType:(int)arg0 ;
-(id)description;
-(id)externalNames;
-(id)initWithType:(int)arg0 ;
-(int)type;
-(void)setType:(int)arg0 ;


@end


#endif