// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSARCHIVEDSURVEYSTEP_H
#define CLSARCHIVEDSURVEYSTEP_H



#import "CLSObject.h"

@interface CLSArchivedSurveyStep : CLSObject {
    NSInteger _version;
    NSInteger _type;
}


@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) NSInteger version;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif