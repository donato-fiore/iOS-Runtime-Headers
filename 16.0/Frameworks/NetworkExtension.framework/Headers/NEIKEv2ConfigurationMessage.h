// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2CONFIGURATIONMESSAGE_H
#define NEIKEV2CONFIGURATIONMESSAGE_H

@class NSArray;
@protocol NEPrettyDescription, NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2ConfigurationMessage : NSObject <NEPrettyDescription, NSCopying>

 {
    NSUInteger _configurationType;
    NSArray *_attributes;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithWithAttributes:(id)arg0 ;


@end


#endif