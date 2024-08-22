// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCXRELATIONSHIP_H
#define OCXRELATIONSHIP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OCXRelationship : NSObject {
    BOOL mExternal;
}


@property (readonly, nonatomic) NSString *idString; // ivar: mIdString
@property (readonly, nonatomic) NSString *target; // ivar: mTarget
@property (readonly, nonatomic) NSString *type; // ivar: mType


-(id)initWithId:(NSUInteger)arg0 type:(id)arg1 target:(id)arg2 external:(BOOL)arg3 ;
-(void)writeToStreamWriter:(id)arg0 ;


@end


#endif