// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCPPACKAGERELATIONSHIP_H
#define OCPPACKAGERELATIONSHIP_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface OCPPackageRelationship : NSObject {
    NSString *mIdentifier;
    NSString *mType;
    int mTargetMode;
    NSURL *mTargetLocation;
}




-(?)initWithXmlElementbaseLocation;
-(?)readFromElementbaseLocation;
-(id)identifier;
-(id)targetLocation;
-(id)type;
-(int)targetMode;


@end


#endif