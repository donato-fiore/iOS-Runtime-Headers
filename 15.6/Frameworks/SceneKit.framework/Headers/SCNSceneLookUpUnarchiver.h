// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNSCENELOOKUPUNARCHIVER_H
#define SCNSCENELOOKUPUNARCHIVER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNSceneLookUpUnarchiver : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif